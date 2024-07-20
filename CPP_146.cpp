#include <vector>
#include <cmath>

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for(int num : nums){
        if(abs(num) > 10 && (num % 10) % 2 != 0 && (abs(num) / 10) % 2 != 0)
            count++;
    }
    return count;
}

int main() {
    int result = specialFilter(vector<int>());
    return 0;
}