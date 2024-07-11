```cpp
#include <vector>
#include <string>

bool same(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); ++i) {
        if(!a[i].compare(0, a[i].size(), b[i])) return false;
    }
    return true;
}

int main() {
    vector<string> strings = {"apple", "banana", "cat", "dog", "elephant"};
    string substring = "an";
    vector<string> result = filter_by_substring(strings, substring);
    if(same({substring}, {s.substr(1) for s in result})) {
        cout << "Substrings of the input strings are the same as the given substring" << endl;
    } else {
        cout << "Substrings of the input strings are not the same as the given substring" << endl;
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