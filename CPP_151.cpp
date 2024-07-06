#include <vector>
#include <cmath>
#include <iostream>

long long double_the_difference(long long* lst, int n) {
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        if (lst[i] > 0 && int(lst[i] + 0.5) == lst[i]) { 
            sum += pow(int(lst[i] + 0.5), 2); 
        }
    }
    return sum;
}

int main_func() {
    long long* lst = new long long;
    int n = 0;

    while (true) {
        std::cout << "Enter a number (or -1 to finish): ";
        double input;
        std::cin >> input;

        if (input == -1.0) break; 

        *lst++ = static_cast<long long>(input);
        n++;
    }

    delete[] lst;
    return 0;
}