#include <iostream>
#include <vector>
#include <algorithm>

bool issame(int x) {
    if (x >= 1 && x <= 9)
        return true;
    else
        return false;
}

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<int> temp;
    for (int i : arr) {
        if (issame(i)) {
            temp.push_back(i);
        }
    }
    sort(temp.begin(), temp.end());
    reverse(temp.begin(), temp.end());
    std::vector<std::string> result;
    for (int i : temp) {
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