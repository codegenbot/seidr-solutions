#include <vector>
#include <string>

// Function to check if two vectors are same
bool issame(const vector<string>& a, const vector<string>& b){
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}

// Filter strings by prefix
vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    vector<string> input = {"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"};
    vector<string> expected = filter_by_prefix(input, "xxx");
    assert(issame(expected , {"xxx", "xxxAAA", "xxx"}) );
    return 0;
}