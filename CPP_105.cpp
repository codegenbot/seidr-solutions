#include <vector>
#include <algorithm>
#include <string>

bool issame(int a, int b) {
    if (a == 0 && b == 0)
        return true;
    else if ((a >= 1 && a <= 9) && (b >= 1 && b <= 9))
        return false;
    else
        return a == b;
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

    for (int i = 0; i < numbers.size() - 1; i++) {
        if (!issame(numbers[i], numbers[i + 1])) {
            result.insert(result.end(), " ";
        }
    }

    return result;
}