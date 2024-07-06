```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string>, vector<string>);

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> odd_count(std::vector<std::string> lst) {
    std::vector<std::string> result;
    for (int i = 0; i < lst.size(); i++) {
        int count = 0;
        for (char c : lst[i]) {
            if (std::stoi(string(1, c)) % 2 != 0) {
                count++;
            }
        }
        result.push_back(std::to_string(count));
    }
    return result;
}

int main() {
    vector<string> test = {"271", "137", "314"};
    vector<string> result = odd_count(test);
    assert(issame(result, {"2", "1", "0"}));  
    return 0;
}