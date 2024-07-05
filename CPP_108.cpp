#include <iostream>
#include <vector>
using namespace std;

int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        int sum = 0;
        int temp = num;

        while (temp != 0) {
            sum += temp % 10;
            temp /= 10;
        }

        if (sum > 0) count++;
    }
    return count;
}

int main() {
    vector<int> numbers;
    int n, num;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> num;
        numbers.push_back(num);
    }

    int result = count_nums(numbers);
    cout << "Count of numbers with non-zero digit sum: " << result << endl;

    return 0;
}