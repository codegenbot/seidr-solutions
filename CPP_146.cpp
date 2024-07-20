#include <vector>
#include <string>

int specialFilter(vector<int> nums){
    int count = 0;
    for (int num : nums) {
        if (num > 10) {
            string str = to_string(abs(num));
            if (str.front() % 2 != 0 && str.back() % 2 != 0) {
                count++;
            }
        }
    }
    return count;
}

int main(int argc, char* argv[]) {
    // Add test cases here to validate the specialFilter function
    return 0;
}