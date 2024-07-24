#include <vector>
#include <algorithm>

int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        if (num >= 0) {
            int sum = 0;
            int abs_num = num;
            while (abs_num > 0) {
                sum += abs_num % 10;
                abs_num /= 10;
            }
            if (sum > 0) {
                count++;
            }
        } else {
            int sum = 0, i = 1;
            int abs_num = num;
            while (abs_num != 0) {
                if ((abs_num / i) % 10 < 0) {
                    sum -= (abs_num / i) % 10;
                } else {
                    sum += (abs_num / i) % 10;
                }
                i *= 10;
                abs_num /= i;
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int n, temp;
    vector<int> nums;
    cout << "Enter the number of integers: ";
    cin >> n;
    
    for(int i = 0; i < n; ++i){
        cout << "Enter integer #"<<(i+1<<": ");
        cin >> temp;
        nums.push_back(temp);
    }
    
    int res = count_nums(nums);
    cout << "Number of integers whose absolute value is a sum of its digits: " << res << endl;
    
    return 0;
}