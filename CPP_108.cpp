#include <vector>
using namespace std;

int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        bool has_positive_sum_of_digits = false;
        if (num >= 0) {
            int sum_of_digits = 0;
            while (num > 0) {
                sum_of_digits += num % 10;
                num /= 10;
            }
            has_positive_sum_of_digits = sum_of_digits > 0;
        } else {
            int sum_of_digits = 0, absolute_num = abs(num);
            while (absolute_num > 0) {
                sum_of_digits += absolute_num % 10;
                absolute_num /= 10;
            }
            has_positive_sum_of_digits = sum_of_digits > 1; // first signed digit is negative
        }
        if (has_positive_sum_of_digits) {
            count++;
        }
    }
    return count;
}

int main() {
    vector<int> numbers;
    int num;
    
    cout << "Enter the numbers (enter -1 to stop):" << endl;
    while ((cin >> num) && (num != -1)) {
        numbers.push_back(num);
    }
    
    int result = count_nums(numbers);
    cout << "The result is: " << result << endl;
    
    return 0;
}