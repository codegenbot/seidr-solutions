#include <vector>
#include <string>

bool areEqual(vector<string> a,vector<string>b){
    if(a.size() != b.size()) {
        return false;
    }
    for(size_t i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(substring) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}
int main() {
    vector<string> strings = {"abc", "abcd", "bcd"};
    string substring = "bc";
    cout << areEqual(filter_by_substring(strings, substring), filter_by_substring({string("abc"), string("abcd"), string("bcd")}, substring)) << endl;
    return 0;
}