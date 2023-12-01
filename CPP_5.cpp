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

bool issame(std::vector<int> numbers1, std::vector<int> numbers2) {
    if (numbers1.size() != numbers2.size()) {
        return false;
    }
    
    for (int i = 0; i < numbers1.size(); i++) {
        if (numbers1[i] != numbers2[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    assert(issame(intersperse({2, 2, 2}, 2), {2, 2, 2, 2, 2}));
    return 0;
}