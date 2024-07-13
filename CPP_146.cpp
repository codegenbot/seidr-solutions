#include <vector>

int specialFilter(vector<int> nums){
    int count = 0;
    for(int num : nums){
        if(num > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0){
            count++;
        }
    }
    return count;
}

int main() {
    int result = specialFilter({1, 11, 21, 31});
    cout << "The number of filtered numbers is: " << result << endl;
    return 0;
}