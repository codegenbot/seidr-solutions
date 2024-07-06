```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int next_smallest(std::vector<int> lst) {
    if (lst.size() < 2) return -1; 
    std::vector<int> sorted = lst;
    std::sort(sorted.begin(), sorted.end());
    int res = sorted[1];
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] == res) {
            if (i >= 2) return res;
            if (i == 1) continue;
            else return sorted[1]; 
        }
    }
    return -1; 
}

int main() {
    int n, num;
    std::vector<int> lst;

    // Read the list size
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    // Read the numbers in the list
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element #"<<i+1<<": ";
        std::cin >> num;
        lst.push_back(num);
    }

    // Print the next smallest number
    int result = next_smallest(lst);

    if(result != -1)
        std::cout << "The next smallest number is: " << result << std::endl;
    else
        std::cout << "No such number exists." << std::endl;

    return 0;
}