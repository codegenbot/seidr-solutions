#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int start = 0, end = 0;
    while ((end = text.find(target, start)) != string::npos) {
        if (start == end)
            indices.push_back(start);
        else
            indices.push_back(start + (end - start));
        start = end + target.length();
    }
    return indices;
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
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;

    string text, target;
    getline(cin, text);
    getline(cin, target);
    vector<int> result = findIndices(text, target);
    for(int i: result)
        cout << i << " ";
    return 0;
}