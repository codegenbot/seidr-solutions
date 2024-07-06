#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(string s : strings){
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;

int main() {
    vector<string> strs1 = {"abc", "def", "ghi"};
    vector<string> strs2 = {"abc", "xyz", "ghi"};

    if(issame(strs1, strs2)) {
        cout << "Strings are same." << endl;
    } else {
        vector<string> result = filter_by_prefix(strs1, "ab");
        cout << "Result: ";
        for(string s : result) {
            cout << s << " ";
        }
        cout << endl;
    }

    return 0;
}