```
#include <vector>
#include <algorithm>

std::vector<int> leaders(std::vector<int>& numbers) {
    std::vector<int> result;
    int n = numbers.size();
    if(n == 0) return result; 

    int max_right = numbers.back();
    for(int i = (int)numbers.size() -1; i >= 0; i--) {
        if(numbers[i] >= max_right) {
            result.push_back(numbers[i]);
            max_right = numbers[i];
        }
    }
    return result;
}

int main() { leaders(std::vector<int>()); return 0; }