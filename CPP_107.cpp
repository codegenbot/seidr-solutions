```cpp
#include <iostream>
#include <vector>

bool issame(int i) {
    int rev = 0;
    int temp = i;
    while(temp != 0) {
        int digit = temp % 10;
        rev = (rev * 10) + digit;
        temp /= 10;
    }
    return i == rev;
}

int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    int even_count = 0, odd_count = 0;
    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0) { // check if the number is even
            if(issame(i)) {
                even_count++;
            }
        } else { // check if the number is odd
            if(issame(i)) {
                odd_count++;
            }
        }
    }

    std::cout << "Number of even palindromes: " << even_count << endl;
    std::cout << "Number of odd palindromes: " << odd_count << endl;

}