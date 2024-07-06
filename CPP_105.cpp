#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<string>, vector<string>) {
    // This function is not used anywhere in your code.
    // It seems like it's supposed to check if two vectors are the same.
    return true;
}

int main() {
    int n;
    std::cout << "Enter number of elements: ";
    std::cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    vector<string> by_length(vector<int> arr) {
        vector<int> temp;
        for (int i : arr) {
            if (i >= 10 && i <= 99) {
                int tens = i / 10;
                int ones = i % 10;
                switch (tens) {
                    case 1:
                        str = "Ten";
                        break;
                    case 2:
                        str = "Twenty";
                        break;
                    case 3:
                        str = "Thirty";
                        break;
                    case 4:
                        str = "Forty";
                        break;
                    case 5:
                        str = "Fifty";
                        break;
                    case 6:
                        str = "Sixty";
                        break;
                    case 7:
                        str = "Seventy";
                        break;
                    case 8:
                        str = "Eighty";
                        break;
                    case 9:
                        str = "Ninety";
                        break;
                }
                switch (ones) {
                    case 1:
                        str += " One";
                        break;
                    case 2:
                        str += " Two";
                        break;
                    case 3:
                        str += " Three";
                        break;
                    case 4:
                        str += " Four";
                        break;
                    case 5:
                        str += " Five";
                        break;
                    case 6:
                        str += " Six";
                        break;
                    case 7:
                        str += " Seven";
                        break;
                    case 8:
                        str += " Eight";
                        break;
                    case 9:
                        str += " Nine";
                        break;
                }
            } else if (i >= 1 && i <= 9) {
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
            } else if (i == 0) {
                str = "Zero";
            } else if (i >= 10 && i <= 99) {
                int tens = i / 10;
                int ones = i % 10;
                switch (tens) {
                    case 1:
                        str = "Ten";
                        break;
                    case 2:
                        str = "Twenty";
                        break;
                    case 3:
                        str = "Thirty";
                        break;
                    case 4:
                        str = "Forty";
                        break;
                    case 5:
                        str = "Fifty";
                        break;
                    case 6:
                        str = "Sixty";
                        break;
                    case 7:
                        str = "Seventy";
                        break;
                    case 8:
                        str = "Eighty";
                        break;
                    case 9:
                        str = "Ninety";
                        break;
                }
                switch (ones) {
                    case 1:
                        str += " One";
                        break;
                    case 2:
                        str += " Two";
                        break;
                    case 3:
                        str += " Three";
                        break;
                    case 4:
                        str += " Four";
                        break;
                    case 5:
                        str += " Five";
                        break;
                    case 6:
                        str += " Six";
                        break;
                    case 7:
                        str += " Seven";
                        break;
                    case 8:
                        str += " Eight";
                        break;
                    case 9:
                        str += " Nine";
                        break;
                }
            } else {
                return "Invalid number";
            }

            result.push_back(str);
        }
        return result;
    }

    vector<string> output = by_length(arr);

    for (string s : output) {
        cout << s << endl;
    }

    return 0;
}