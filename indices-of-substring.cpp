#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int start = 0, end = 0;
    
    while(end < text.length()) {
        if(text.substr(start, end - start + 1).compare(target) == 0) {
            result.push_back(start);
            start += target.length();
        } else {
            start++;
        }
        end = min((int)text.find(target, start), text.length());
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    string s;
    getline(cin, s);

    vector<int> res = indicesOfSubstring(s, s.substr(0, 1));
    for(int i:res) {
        cout << i << endl;
    }

    return 0;
}