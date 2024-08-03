#include <vector>
using namespace std;

int main() {
    vector<int> n;
    int count = 0;
    cout << "Enter numbers (separated by spaces): ";
    for(int i; cin >> i; ) {
        n.push_back(i);
    }
    for (int num : n) {
        bool has_positive_sum = false;
        if (num >= 0) {
            int sum = 0;
            int temp = num;
            while (temp > 0) {
                int digit = temp % 10;
                sum += digit;
                temp /= 10;
            }
            if (sum > 0)
                has_positive_sum = true;
        } else {
            int sum = 0, sign = 1;
            int temp = -num;
            while (temp > 0) {
                int digit = temp % 10;
                if (digit < 0)
                    sign = -1;
                sum += sign * digit;
                temp /= 10;
            }
            if (sum > 0)
                has_positive_sum = true;
        }
        if (has_positive_sum)
            count++;
    }
    cout << "Count of numbers with positive sum of digits: " << count << endl;
    return 0;
}