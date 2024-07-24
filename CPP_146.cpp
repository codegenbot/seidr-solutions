```cpp
#include <vector>
using namespace std;

int specialFilter(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    vector<int> input;
    cout << "Enter numbers separated by space: ";
    int num;
    while (cin >> num) {
        input.push_back(num);
        if (cin.peek() == ' ') {
            cin.ignore();
        } else if (cin.peek() != '\n') {
            break;
        }
    }
    cout << "Special filtered count: " << specialFilter(input) << endl;
    return 0;
}