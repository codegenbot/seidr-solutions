#include <iostream>
#include <vector>
#include <algorithm>

bool issame(int i1, int i2) {
    if (i1 == i2)
        return true;
    else
        return false;
}

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<int> temp;
    for (int i : arr) {
        if (issame(i % 100, 10)) {
            if (i >= 1 && i <= 9) {
                temp.push_back(i);
            }
        } else if ((i >= 10 && i <= 19) || (i >= 20 && i <= 29) || (i >= 30 && i <= 39) || (i >= 40 && i <= 49) || (i >= 50 && i <= 59) || (i >= 60 && i <= 69) || (i >= 70 && i <= 79) || (i >= 80 && i <= 89) || (i >= 90 && i <= 99)) {
                temp.push_back(i);
            }
    }
    sort(temp.begin(), temp.end());
    reverse(temp.begin(), temp.end());
    std::vector<std::string> result;
    for (int i : temp) {
        string str = "";
        switch (i % 10) {
            case 1:
                if (!issame(i, 11) && !issame(i, 12) && !issame(i, 13) && !issame(i, 14) && !issame(i, 15) && !issame(i, 16) && !issame(i, 17) && !issame(i, 18) && !issame(i, 19)) {
                    str = "One";
                }
                break;
            case 2:
                if (!issame(i, 20) && !issame(i, 21) && !issame(i, 22) && !issame(i, 23) && !issame(i, 24) && !issame(i, 25) && !issame(i, 26) && !issame(i, 27) && !issame(i, 28) && !issame(i, 29)) {
                    str = "Two";
                }
                break;
            case 3:
                if (!issame(i, 30) && !issame(i, 31) && !issame(i, 32) && !issame(i, 33) && !issame(i, 34) && !issame(i, 35) && !issame(i, 36) && !issame(i, 37) && !issame(i, 38) && !issame(i, 39)) {
                    str = "Three";
                }
                break;
            case 4:
                if (!issame(i, 40) && !issame(i, 41) && !issame(i, 42) && !issame(i, 43) && !issame(i, 44) && !issame(i, 45) && !issame(i, 46) && !issame(i, 47) && !issame(i, 48) && !issame(i, 49)) {
                    str = "Four";
                }
                break;
            case 5:
                if (!issame(i, 50) && !issame(i, 51) && !issame(i, 52) && !issame(i, 53) && !issame(i, 54) && !issame(i, 55) && !issame(i, 56) && !issame(i, 57) && !issame(i, 58) && !issame(i, 59)) {
                    str = "Five";
                }
                break;
            case 6:
                if (!issame(i, 60) && !issame(i, 61) && !issame(i, 62) && !issame(i, 63) && !issame(i, 64) && !issame(i, 65) && !issame(i, 66) && !issame(i, 67) && !issame(i, 68) && !issame(i, 69)) {
                    str = "Six";
                }
                break;
            case 7:
                if (!issame(i, 70) && !issame(i, 71) && !issame(i, 72) && !issame(i, 73) && !issame(i, 74) && !issame(i, 75) && !issame(i, 76) && !issame(i, 77) && !issame(i, 78) && !issame(i, 79)) {
                    str = "Seven";
                }
                break;
            case 8:
                if (!issame(i, 80) && !issame(i, 81) && !issame(i, 82) && !issame(i, 83) && !issame(i, 84) && !issame(i, 85) && !issame(i, 86) && !issame(i, 87) && !issame(i, 88) && !issame(i, 89)) {
                    str = "Eight";
                }
                break;
            case 9:
                if (!issame(i, 90) && !issame(i, 91) && !issame(i, 92) && !issame(i, 93) && !issame(i, 94) && !issame(i, 95) && !issame(i, 96) && !issame(i, 97) && !issame(i, 98) && !issame(i, 99)) {
                    str = "Nine";
                }
                break;
        }
        result.push_back(str);
    }
    return result;
}