#include <iostream>
#include <vector>

int main() {
    std::vector<int> lst;
    int max;

    // Read input from user
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for(int i=0; i<n; ++i) {
        int num;
        std::cout << "Enter element "<< i+1 << ": ";
        std::cin >> num;
        lst.push_back(num);
    }

    max = search(lst);

    // Return output
    if(max != -1)
        std::cout << "Maximum is: " << max << std::endl;
    else
        std::cout << "No such element exists" << std::endl;

    return 0;
}

int search(vector<int> lst) {
    int max = -1;
    for (auto num : lst) {
        if (num > 0 && count(num) >= num) {
            max = num;
            break;
        }
    }
    return max;
}