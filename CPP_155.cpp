#include <vector>
#include <cassert>

std::vector<int> counts(std::vector<int> b, int num) {
    std::vector<int> result;
    
    int count = 0;
    for (int i = 0; i < b.size(); ++i) {
        if (b[i] == num) {
            ++count;
        }
    }
    
    result.push_back(count);
    
    return result;
}

int main() {
    std::vector<int> numbers = {1, 1, 2, 3, 1, 4, 1};
    int target = 1;
    
    std::vector<int> result = counts(numbers, target);
    
    for (int count : result) {
        std::cout << count << " ";
    }
    
    return 0;
}