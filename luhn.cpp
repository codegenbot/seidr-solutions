#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    std::cin >> n;
    vector<int> digits(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> digits[i];
    }
    
    int sum = 0;
    for (int i = n - 1; i >= 0; --i) {
        if ((i + 1) % 2 == 0) {
            int doubled = digits[i] * 2;
            sum += (doubled > 9) ? doubled - 9 : doubled;
        } else {
            sum += digits[i];
        }
    }
    
    std::cout << sum << std::endl;
    
    return 0;
}