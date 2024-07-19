#include <vector>
#include <cassert>

std::vector<int> intersperse(std::vector<int> numbers, int delimeter);

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    if (issame(intersperse({2, 2, 2}, 2), {2, 2, 2, 2, 2})) {
        // Test passed
    } else {
        // Test failed
    }
    return 0;
}

std::vector<int> intersperse(std::vector<int> numbers, int delimeter){
    std::vector<int> result;
    for (int i = 0; i < numbers.size(); ++i) {
        if (i > 0) {
            result.push_back(delimeter);
        }
        result.push_back(numbers[i]);
    }
    return result;
}