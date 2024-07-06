#include <vector>

int basement(const std::vector<int>& numbers) {
    int sum = 0;
    for (int i = 0; i < numbers.size(); ++i) {
        sum += numbers[i];
        if (sum < 0) return i;
    }
    return -1; 
}

int main() { 
    return basement({-1, 2, 3, -7, 5, 6, 1}); 
}