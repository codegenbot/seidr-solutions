```cpp
#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

vector<vector<string>> filter_by_substring(vector<vector<string>> strings, string substring){
    vector<vector<string>> result;
    for(auto str : strings) {
        bool same = false;
        for(auto s : str) {
            if(s.find(substring) != string::npos) {
                same = true;
                break;
            }
        }
        if(same) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    vector<vector<string>> strings = {{"apple", "banana"}, {"orange", "grape"}};
    string substring = "ana";
    vector<vector<string>> result = filter_by_substring(strings, substring);
    for(auto str : result) {
        bool same = false;
        for(auto s : str) {
            if(s.find(substring) != string::npos) {
                same = true;
                break;
            }
        }
        if(same) {
            cout << "Substrings found: ";
            for(auto s : str) {
                cout << s << " ";
            }
            cout << endl;
        }
    }
}