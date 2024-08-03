#include <vector>
using namespace std;

vector<int> findIndices(const string& text, const string& target) {
    vector<int> result;
    int start = 0;
    
    while(start + target.size() <= text.size()) {
        if(text.substr(start, target.size()) == target) {
            result.push_back(start);
            start += min(target.size(), start + target.size());
        } else {
            start++;
        }
    }
    
    return result;
}

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    cout << gcd(n1, n2) << endl;

    string text, target;
    cin >> text >> target;
    vector<int> indices = findIndices(text, target);
    for (int i : indices)
        cout << i << " ";
    return 0;
}