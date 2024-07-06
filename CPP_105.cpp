#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<string>, vector<string>) {
    // code here
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    vector<string> by_length(vector<int> arr) {
        vector<int> temp;
        for (int i : arr) {
            if (i >= 1 && i <= 9) {
                temp.push_back(i);
            }
        }
        sort(temp.begin(), temp.end());
        reverse(temp.begin(), temp.end());
        vector<string> result;
        for (int i : temp) {
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
            result.push_back(str);
        }
        return result;
    }

    vector<string> output = by_length(arr);

    for (const string& s : output) {
        std::cout << s << " ";
    }

    return 0;
}