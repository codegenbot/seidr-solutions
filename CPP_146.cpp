#include <vector>
using namespace std;

int specialFilter(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && ((num % 10) % 2 != 0 || (num / 10) % 10 % 2 != 0)) {
            count++;
        }
    }
    return count;

}

int main() {
    vector<int> test = {1, 2, 3};
    int result = specialFilter(test);
    cout << "The result is: " << result << endl; 
}