#include <vector>
#include <string>

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix) {
    std::vector<std::string> result;
    for (std::string s : strings) {
        if (s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;

}

bool issame(const vector<string>& a, const vector<string>& b){
    return a==b;

}

int main() {
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));
    return 0;
}