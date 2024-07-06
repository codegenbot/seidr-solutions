#include <vector>
#include <algorithm>
#include <string>

bool issame(int a, int b) {
    vector<int> numbers;
    for (int num : {a, b}) {
        if (num >= 1 && num <= 9) {
            numbers.push_back(num);
        }
    }

    sort(numbers.begin(), numbers.end());
    reverse(numbers.begin(), numbers.end());

    string a_str = "", b_str = "";
    switch (numbers[0]) {
        case 1:
            a_str = "One";
            break;
        case 2:
            a_str = "Two";
            break;
        case 3:
            a_str = "Three";
            break;
        case 4:
            a_str = "Four";
            break;
        case 5:
            a_str = "Five";
            break;
        case 6:
            a_str = "Six";
            break;
        case 7:
            a_str = "Seven";
            break;
        case 8:
            a_str = "Eight";
            break;
        case 9:
            a_str = "Nine";
            break;
    }

    switch (numbers[1]) {
        case 1:
            b_str = "One";
            break;
        case 2:
            b_str = "Two";
            break;
        case 3:
            b_str = "Three";
            break;
        case 4:
            b_str = "Four";
            break;
        case 5:
            b_str = "Five";
            break;
        case 6:
            b_str = "Six";
            break;
        case 7:
            b_str = "Seven";
            break;
        case 8:
            b_str = "Eight";
            break;
        case 9:
            b_str = "Nine";
            break;
    }

    return a_str == b_str;
}