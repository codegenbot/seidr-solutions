```cpp
#include <vector>
#include <iostream>

int count_nums(vector<int> v) {
    int count = 0;
    for (int num : v) {
        if (num >= 0) {
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            if (sum > 0) {
                count++;
            }
        } else {
            num = -num; 
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    vector<int> v;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    for(int i = 0; i < n; i++) {
        int num;
        cout << "Enter element " << i+1 << ": ";
        cin >> num;
        v.push_back(num);
    }
    cout << "The count of numbers with positive sum of digits is: " << count_nums(v) << endl;
    return 0;
}