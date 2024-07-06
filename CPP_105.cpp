```
#include <vector>
#include <algorithm>
#include <string>

bool issame(int a, int b) {
    vector<string> result;
    if (a >= 1 && a <= 9 && b >= 1 && b <= 9) {
        string strA = "";
        switch (a) {
            case 1:
                strA = "One";
                break;
            case 2:
                strA = "Two";
                break;
            case 3:
                strA = "Three";
                break;
            case 4:
                strA = "Four";
                break;
            case 5:
                strA = "Five";
                break;
            case 6:
                strA = "Six";
                break;
            case 7:
                strA = "Seven";
                break;
            case 8:
                strA = "Eight";
                break;
            case 9:
                strA = "Nine";
                break;
        }

        string strB = "";
        switch (b) {
            case 1:
                strB = "One";
                break;
            case 2:
                strB = "Two";
                break;
            case 3:
                strB = "Three";
                break;
            case 4:
                strB = "Four";
                break;
            case 5:
                strB = "Five";
                break;
            case 6:
                strB = "Six";
                break;
            case 7:
                strB = "Seven";
                break;
            case 8:
                strB = "Eight";
                break;
            case 9:
                strB = "Nine";
                break;
        }

        result.push_back(strA);
        result.push_back(strB);
    }
    return result.size() > 0;
}

vector<string> by_length(vector<int> arr) {
    vector<int> numbers;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            numbers.push_back(num);
        }
    }

    sort(numbers.begin(), numbers.end());
    reverse(numbers.begin(), numbers.end());

    vector<string> result;
    for (int num : numbers) {
        string str = "";
        switch (num) {
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