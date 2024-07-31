#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

std::vector<int> incr_list(int n) {
    std::vector<int> result;
    for (int i = 1; i <= n; i++) {
        result.push_back(i);
    }
    return result;
}

int main() {
    std::vector<int> vec1 = incr_list(5);
    std::vector<int> vec2 = incr_list(5);

    bool result = issame(vec1, vec2);

    return 0;
}