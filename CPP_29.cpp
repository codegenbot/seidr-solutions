#include <cassert>

bool are_same(const vector<string>& v1, const vector<string>& v2){
    return v1 == v2;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(const string& str : strings){
        if(str.find(prefix) == 0){
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    vector<string> input = {"apple", "banana", "apricot", "orange"};
    vector<string> expected_output = {"apple", "apricot"};
    vector<string> result = filter_by_prefix(input, "ap");

    assert(are_same(expected_output, result));

    return 0;
}