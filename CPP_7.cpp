#include <vector>
#include <string>

bool same(vector<string> a, vector<string> b);

int main() {
    vector<string> strings;
    string substring;

    cin >> substring;
    for(int i = 0; i < 3; ++i) {
        string s;
        cin >> s;
        strings.push_back(s);
    }

    vector<string> result = filter_by_substring(strings, substring);

    for(auto str : result) {
        if(same({str}, strings)) {
            cout << str << endl;
        }
    }

    return 0;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(auto str : strings) {
        if(str.find(substring) != string::npos)
            result.push_back(str);
    }
    return result;
}

bool same(vector<string> a, vector<string> b) {
    if(a.size() != b.size())
        return false;

    for(int i = 0; i < a.size(); ++i) {
        if(a[i] != b[i])
            return false;
    }

    return true;
}