#include <string>

vector<string> by_length(vector<int> arr) {
    vector<string> result;

    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            int num = i;
            string str = "";
            map<int, string> numberMap = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"},
                                           {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
            while (num > 0) {
                str = numberMap[num % 10] + " " + str;
                num /= 10;
            }
            result.push_back(str.substr(0, str.length() - 1));
        }
    }

    reverse(result.begin(), result.end());
    return result;
}