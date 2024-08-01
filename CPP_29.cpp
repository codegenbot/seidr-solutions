```cpp
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

int main(){
    int n;
    cin >> n;

    vector<string> strings(n);
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        strings[i] = s;
    }

    string prefix;
    cin >> prefix;

    vector<string> result = filter_by_prefix(strings, prefix);

    if(issame(result, strings)){
        cout << "The filtered list is the same as the original list." << endl;
    } else{
        for (string s : result) {
            cout << s << endl;
        }
    }

    return 0;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for (string s : strings) {
        if (s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;
}