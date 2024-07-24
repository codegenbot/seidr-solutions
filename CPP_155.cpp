#include <vector>
#include <cassert>

std::vector<int> counts(std::vector<int> b, int num) {
    std::vector<int> result;
    for (int i = 0; i < b.size(); ++i) {
        int count = 0;
        int currentNum = b[i];
        while (currentNum > 0) {
            if (currentNum % 10 == num)
                ++count;
            currentNum /= 10;
        }
        result.push_back(count);
    }
    return result;
}

int main() {
    std::vector<int> b = {123, 456, 789};
    int num = 3;
    
    std::vector<int> result = counts(b, num);
    
    for (int i = 0; i < result.size(); ++i) {
        std::cout << result[i] << " ";
    }
    
    return 0;
}