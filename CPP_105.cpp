#include <vector>
#include <string>
#include <algorithm>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main() {
    assert(issame(by_length({9, 4, 8}) , {"Nine", "Four", "Eight"}));
    vector<string> result = by_length({1,2,3});
    for (const string &s : result) {
        cout << s << endl;
    }
}

vector<string> by_length(vector<int> arr) {
    vector<string> result;

    // Sort the array and reverse it
    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());

    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            string str;
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
    }

    return result;
}