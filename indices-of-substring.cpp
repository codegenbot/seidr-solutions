#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int start = 0;
    while (start < text.length()) {
        size_t pos = text.find(target, start);
        if (pos != string::npos) {
            result.push_back(pos);
            start = pos + 1;
        } else {
            break;
        }
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    string str;
    getline(cin, str);
    vector<int> res = indicesOfSubstring(str, str.substr(0, n));
    for (int i : res) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}