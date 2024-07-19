#include <vector>
#include <string>
#include <cassert>

bool issame(vector<string> a, vector<string> b){
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for (const auto &str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    vector<string> input = {"apple", "banana", "orange", "pear", "peach"};
    vector<string> expected = {"pear", "peach"};
    
    vector<string> output = filter_by_prefix(input, "p");
    
    assert(issame(output, expected));
    
    return 0;
}