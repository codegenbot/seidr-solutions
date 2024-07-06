#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<string>, vector<string>) {
    // This function is not used in the given code
}

int main() {
    int n;
    std::cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    vector<string> result = by_length(arr);

    for (const auto &str : result) {
        std::cout << str << " ";
    }
    return 0;
}

vector<string> by_length(vector<int> arr) {
    vector<string> temp;
    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            string str = "";
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
            temp.push_back(str);
        }
    }
    sort(temp.begin(), temp.end());
    reverse(temp.begin(), temp.end());
    return temp;
}