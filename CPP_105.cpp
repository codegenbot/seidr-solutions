#include <iostream>
#include <vector>
#include <algorithm>

bool issame(int i, int j) {
    if (i == j)
        return true;
    else
        return false;
}

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<int> numArr;
    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            numArr.push_back(i);
        }
    }

    sort(numArr.begin(), numArr.end());

    reverse(numArr.begin(), numArr.end());

    std::vector<std::string> result;
    for (int i : numArr) {
        std::string str = "";
        switch (i) {
            case 1:
                str = "One";
                break;
            case 2:
                str = "Two";
                break;
            case 3:
                str = "Three";
                break;
            case 4:
                str = "Four";
                break;
            case 5:
                str = "Five";
                break;
            case 6:
                str = "Six";
                break;
            case 7:
                str = "Seven";
                break;
            case 8:
                str = "Eight";
                break;
            case 9:
                str = "Nine";
                break;
        }
        result.push_back(str);
    }

    return result;
}

int main() {
    std::vector<int> arr;
    int n;
    std::cout << "Enter the number of integers: ";
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        int x;
        std::cout << "Enter integer # " << (i + 1) << ": ";
        std::cin >> x;
        arr.push_back(x);
    }

    std::vector<std::string> result = by_length(arr);

    for (std::string str : result) {
        std::cout << str << " ";
    }
    return 0;
}