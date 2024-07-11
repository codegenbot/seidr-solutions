```cpp
#include <vector>
#include <algorithm>

bool issame(vector<string> a,vector<string>b){
    if (a.size() != b.size())
        return false;
    
    for (int i = 0; i < a.size(); i++) {
        vector<string>::iterator it = find(b.begin(), b.end(), a[i]);
        if (it == b.end())
            return false;
    }
    
    return true;
}

int main() {
    int n;
    cin >> n;

    vector<vector<string>> words(2);
    for(int i = 0; i < 2; ++i){
        int m;
        cin >> m;
        words[i].resize(m);
        for (int j = 0; j < m; ++j) {
            string word;
            cin >> word;
            words[i].push_back(word);
        }
    }

    bool same = issame(words[0],words[1]);
    
    if(same)
        cout << "Same\n";
    else
        cout << "Not Same\n";

    return 0;
}