#include <vector>
#include <cmath>

int main() {
    std::vector<float> lst;
    long long odd_sum = 0; 
    int result = double_the_difference(lst);
    
    float num;
    cout << "Enter numbers (enter -1 to stop): ";
    while ((cin >> num) && num != -1) {
        if (num > 0 && floor(num) == num) { 
            if (num % 2 != 0) { 
                odd_sum += pow(num, 2);
            }
        } else if (num < 0 || num != int(num)) {
            return 1;
        }
        lst.push_back(num);
    }
    
    cout << "The difference between sum of squares of all positive even numbers and sum of squares of all odd numbers is: ";
    cout << pow(double(sum(lst)), 2) - double(odd_sum) << endl;
    return 0;
}

long long double_the_difference(const std::vector<float>& lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            if (num % 2 != 0) { 
                sum += pow(num, 2);
            }
        }
    }
    return sum;
}