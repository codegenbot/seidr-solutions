```cpp
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    return 0;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    vector<string> result;

    for(const auto& str : lst1) {
        for(char c : str) {
            string s(1,c);
            if(find(lst2.begin(),lst2.end(),s) != lst2.end()) {
                if(find(result.begin(),result.end(),s) == result.end())
                    result.push_back(s);
            }
        }
    }

    return result;
}