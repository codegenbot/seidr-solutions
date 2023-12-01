#include <vector>

std::vector<int> intersperse(std::vector<int> numbers, int delimiter) {
    std::vector<int> result;
   
    for (int i = 0; i < numbers.size(); i++) {
        result.push_back(numbers[i]);
        
        if (i != numbers.size() - 1) {
            result.push_back(delimiter); 
        }
    }
    
    return result;
}

bool issame(std::vector<int> v1, std::vector<int> v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    assert(issame(intersperse({2, 2, 2}, 2), {2, 2, 2, 2, 2}));
    return 0;
}