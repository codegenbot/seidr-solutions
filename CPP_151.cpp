```cpp
#include <vector>
#include <cmath>

int main() {
    std::vector<float> lst;
    long long odd_sum = 0; 
    int result = double_the_difference(lst);
    
    // Read input from user
    int n;
    cin >> n;

    for(int i=0; i<n; i++) {
        float num;
        cin >> num;
        lst.push_back(num);
    }

    cout << "The sum of squares of the odd numbers is: " << double_the_difference(lst) << endl;
    
}

long long double_the_difference(std::vector<float> lst) {
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