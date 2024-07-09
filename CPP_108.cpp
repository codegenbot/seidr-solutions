#include <vector>
#include <iostream>

int main() {
    vector<int> n;
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;
    n.resize(size);
    
    for(int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> n[i];
    }
    
    int result = count_nums(n);
    
    cout << "Number of nums: " << result << endl;
    return 0;
}

int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        if (num > 0) {
            int sum = 0;
            bool negative = false;
            while (num != 0) {
                int digit = abs(num) % 10;
                if (digit == 5 || digit == 0) continue;
                if (negative) {
                    if (digit < 5) sum -= digit;
                    else sum += digit - 5;
                } else {
                    sum += digit;
                }
                num /= 10;
                negative = !negative;
            }
            if (sum > 0) count++;
        }
    }
    return count;
}