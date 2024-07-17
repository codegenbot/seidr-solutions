#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> result;
    int last = 0;
    while (true) {
        size_t pos = text.find(target, last);
        if (pos == string::npos)
            break;
        result.push_back(pos);
        last = pos + 1;
    }
    return result;
}

int gcd(int a, int b) {
    if(b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;

    string text, target;
    getline(cin, text);
    getline(cin, target);
    vector<int> result = findIndices(text, target);
    for(int i : result)
        cout << i << " ";
    return 0;
}