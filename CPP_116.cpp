#include <algorithm>
#include <vector>

vector<int> sort_array(vector<int> arr) {
    sort(arr.begin(), arr.end(), [](int num1, int num2) {
        int countA = __builtin_popcount(num1);
        int countB = __builtin_popcount(num2);
        if (countA == countB) {
            return num1 < num2;
        }
        return countA < countB;
    });
    return arr;
}

int main() {
    // Test cases
    vector<int> sorted = sort_array({2, 4, 8, 16, 32});
    // Add any additional test cases here
    
    return 0;
}