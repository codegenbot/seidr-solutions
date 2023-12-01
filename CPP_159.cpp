#include <vector>

std::vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int left = remaining - need;
    
    if (left < 0) {
        left = 0;
    }
    
    std::vector<int> result = {total, left};
    return result;
}

int main() {
    // Test the eat() function
    std::vector<int> result = eat(1, 2, 3);
    
    return 0;
}