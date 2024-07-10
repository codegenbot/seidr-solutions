#include <iostream>
#include <algorithm>
#include <string>

int getMax(int n) {
    int max = 0;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::string str; 

    for (int i = 0; i < n; i++) {
        int x;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> x;
        if(x > max)
            max = x;
        str += x + " "; 
    }

    return max; 
}