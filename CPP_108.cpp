#include <vector>
#include <string>
#include <iostream>

int count_nums(const std::vector<std::string>& nums) {
    int count = 0;
    for (const auto& num : nums) {
        if (num[0] == '-') {
            int sign = -1, sum = 0;
            for(int j=num.length()-1; j>=0; j--) {
                if (num[j] == '-') {
                    continue;
                }
                sum += std::abs(num[j] - '0') * sign;
                sign *= -1;
            }
            if (sign * sum % 2 != 0)
                count++;
        } else {
            int sum = 0;
            for (char c : num) {
                if (c == '-') {
                    continue;
                }
                sum += c - '0';
            }
            if (sum % 2 != 0)
                count++;
        }
    }
    return count;

}

int main() { 
    std::vector<std::string> numbers; 
    int n; 
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        std::string num; 
        cin >> num; 
        numbers.push_back(num);
    }
    
    return count_nums(numbers);
}