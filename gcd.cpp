#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int start = 0;
    
    while ((start = text.find(target, start)) != string::npos) {
        indices.push_back(start);
        start += 1; // to avoid overlapping matches
    }
    return indices;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    
    cout << gcd(num1, num2) << endl;
    
    string text, target;
    cin >> text >> target;
    
    vector<int> result = findIndices(text, target);
    
    for (int i : result) {
        cout << i << endl;
    }
    
    return 0;
}