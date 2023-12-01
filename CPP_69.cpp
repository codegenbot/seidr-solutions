#include <iostream>
#include <vector>

int search(std::vector<int> lst) {
    int maxNum = -1;
    for (int i = 0; i < lst.size(); i++) {
        int num = lst[i];
        int count = 0;
        for (int j = 0; j < lst.size(); j++) {
            if (lst[j] == num) {
                count++;
            }
        }
        if (count >= num && num > maxNum) {
            maxNum = num;
        }
    }
    return maxNum;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> lst(n);
    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        std::cin >> lst[i];
    }
    
    int result = search(lst);
    std::cout << "Maximum number: " << result << std::endl;
    
    return 0;
}