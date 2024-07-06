#include <vector>
#include <algorithm>
#include <string>

bool issame(int a, int b) {
    if (a == 1 && b == 2 || a == 3 && b == 4 || a == 5 && b == 6 || a == 7 && b == 8 || a == 9 && b == 0)
        return true;
    return false;
}

vector<string> by_length(vector<int> arr) {
    vector<string> result;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
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
            for (int i = 0; i < arr.size(); i++) {
                if (issame(num, arr[i])) {
                    str += ", Same";
                    break;
                }
            }
            result.push_back(str);
        }
    }

    return result;
}