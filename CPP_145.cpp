#include <algorithm>
#include <vector>
#include <string>

bool compare(int a, int b) {
    int sumA = 0, sumB = 0;
    std::string strA = std::to_string(a);
    std::string strB = std::to_string(b);
    
    for (char c : strA) {
        if (isdigit(c)) {
            sumA += c - '0';
        }
    }
    
    for (char c : strB) {
        if (isdigit(c)) {
            sumB += c - '0';
        }
    }
    
    if (sumA == sumB) {
        return a < b;
    }
    
    return sumA < sumB;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) {
        return false;
    }
    
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

std::vector<int> order_by_points(std::vector<int> nums) {
    std::sort(nums.begin(), nums.end(), compare);
    return nums;
}

int main() {
    assert(issame(order_by_points({0,6,6,-76,-21,23,4}), {-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}