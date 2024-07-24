#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    std::vector<int> result;
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == b[i]) {
            result.push_back(1);
        } else {
            result.push_back(0);
        }
    }
    
    return result;
}

int main() {
    // add test cases here
    return 0;
}