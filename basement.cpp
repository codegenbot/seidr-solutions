```cpp
#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

int basement(const vector<int>& nums) {
    int sum = 0;
    for (size_t i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) return i;
    }
    throw runtime_error("No basement found");

}

int main() {
    try {
        return basement({-1,2,3,-2,5});
    } catch(const exception& e) {
        cerr << "Error: " << e.what() << '\n';
        return -1;
    }
}