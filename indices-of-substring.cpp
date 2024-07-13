#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int start = 0;
    
    while (start < text.length()) {
        size_t pos = text.find(target, start);
        if (pos != string::npos) {
            result.push_back(pos);
            start = pos + 1; // move forward for next match
        } else {
            break; // no more matches
        }
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    string text;
    getline(cin, text);

    vector<int> res = indicesOfSubstring(text, text.substr(0, n));
    for (auto i : res) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}