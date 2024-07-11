```cpp
#include <vector>
#include <string>

bool same(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<string> strings = {"apple", "banana", "cherry"};
    string substring = "an";
    vector<string> result = filter_by_substring(strings, substring);
    
    if(same({"banana"}, result)) {
        for(auto str : result) {
            cout << str << endl;
        }
    } else {
        cout << "No matching strings found." << endl;
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