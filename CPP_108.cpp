#include <iostream>
#include <vector>

using namespace std;

int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            int n = num;
            while (n > 0) {
                sum += n % 10;
                n /= 10;
            }
            if (sum > 0)
                count++;
        } else {
            int sum = 0, sign = 1;
            int n = abs(num);
            while (n > 0) {
                sum += n % 10 * sign;
                n /= 10;
                sign = -sign;
            }
            if (sum > 0)
                count++;
        }
    }
    return count;
}

int main() {
    vector<int> input;
    int num;
    
    cout << "Enter numbers (-1 to stop):" << endl;
    while (true) {
        cin >> num;
        if (num == -1)
            break;
        input.push_back(num);
    }
    
    cout << "Count: " << count_nums(input) << endl;

    return 0;
}