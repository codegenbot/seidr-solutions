#include <vector>
#include <algorithm>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size())
        return false;
    
    for (int i = 0; i < a.size(); i++) {
        if (find(b.begin(), b.end(), a[i]) == b.end())
            return false;
    }
    
    return true;
}

vector<string> filter_by_substring(vector<string> arr, string sub) {
    vector<string> result;
    for (auto s : arr) {
        if (s.find(sub) != string::npos)
            result.push_back(s);
    }
    return result;

int main() {
    int n;
    cin >> n;
    
    vector<string> words(n);
    for(int i = 0; i < n; i++)
        cin >> words[i];
        
    string sub;
    cin >> sub;
    
    if (issame(filter_by_substring(words, sub), filterBySubstring(words, "")) )
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}