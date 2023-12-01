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
    int size;
    std::cout << "Enter the size of the list: ";
    std::cin >> size;

    std::vector<int> lst(size);
    std::cout << "Enter the elements of the list: ";
    for (int i = 0; i < size; i++) {
        std::cin >> lst[i];
    }
    
    int result = search(lst);
    std::cout << "The maximum number satisfying the conditions is: " << result << std::endl;

    return 0;
}