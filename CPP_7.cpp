#include <vector>
#include <string>
#include <cassert>

bool issame(const vector<string>& a, const vector<string>& b){
    if(a.size() != b.size()){
        return false;
    }
    for(size_t i = 0; i < a.size(); ++i){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(const auto& str : strings){
        if(str.find(substring) != string::npos){
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    vector<string> test1 = {"apple", "banana", "orange"};
    vector<string> expected1 = {"apple", "orange"};
    vector<string> filtered1 = filter_by_substring(test1, "pp");
    assert(issame(filtered1, expected1));

    vector<string> test2 = {"hello", "world", "cpp"};
    vector<string> expected2 = {"hello", "world"};
    vector<string> filtered2 = filter_by_substring(test2, "o");
    assert(issame(filtered2, expected2));

    return 0;
}