#include <vector>
#include <string>

bool isSame(const vector<string>& v1, const vector<string>& v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    for (size_t i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
}

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
    vector<string> a = {"xxx", "asd", "xxy", "john doe", "xxxA", "xxx"};
    vector<string> b = {"xxx", "xxxAAA", "xxx"};
    
    assert (isSame(filter_by_prefix(a, "xxx") , vector<string>(b.begin(), b.end())) );
    return 0;
}