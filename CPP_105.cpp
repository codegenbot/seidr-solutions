```cpp
#include <iostream>
#include <vector>
#include <string>

bool same(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if(a.size() != (std::size_t)b.size()) {
        return false;
    }
    
    for(std::size_t i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

std::vector<std::string> by_length(const std::vector<int>& arr) {
    std::vector<std::string> result[10];
    
    for (int i : arr) {
        switch (i) {
            case 1:
                result[0].push_back("One");
                break;
            case 2:
                result[0].push_back("Two");
                break;
            case 3:
                result[0].push_back("Three");
                break;
            case 4:
                result[0].push_back("Four");
                break;
            case 5:
                result[0].push_back("Five");
                break;
            case 6:
                result[0].push_back("Six");
                break;
            case 7:
                result[0].push_back("Seven");
                break;
            case 8:
                result[0].push_back("Eight");
                break;
            case 9:
                result[0].push_back("Nine");
                break;
        }
    }

    for (int i = 1; i < 10; i++) {
        if(result[i-1].size() > 0) {
            result[0].clear();
            result[0].insert(result[0].end(), result[i-1].begin(), result[i-1].end());
            result[i-1].clear();
        }
    }

    return {result[0]};
}

int main() {
    assert(same(by_length({1,4,8}), {"One","Four","Eight"}));
    return 0;
}