#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<vector<string>> by_length(vector<int> arr) {
    vector<vector<string>> result;
    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            string num;
            switch (i) {
                case 1:
                    num = "One";
                    break;
                case 2:
                    num = "Two";
                    break;
                case 3:
                    num = "Three";
                    break;
                case 4:
                    num = "Four";
                    break;
                case 5:
                    num = "Five";
                    break;
                case 6:
                    num = "Six";
                    break;
                case 7:
                    num = "Seven";
                    break;
                case 8:
                    num = "Eight";
                    break;
                case 9:
                    num = "Nine";
                    break;
            }
            if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8) {
                result.push_back({num});
            } else {
                result.push_back({num, num});
            }
        }
    }
    return result;
}