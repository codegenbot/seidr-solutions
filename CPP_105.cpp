Here is the modified code:

```cpp
#include <vector>
#include <string>
#include <algorithm>
#include <initializer_list>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
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
        string str = to_string(num);
        if (str.length() == 1) {
            switch (num) {
                case 1:
                    result.push_back("One");
                    break;
                case 2:
                    result.push_back("Two");
                    break;
                case 3:
                    result.push_back("Three");
                    break;
                case 4:
                    result.push_back("Four");
                    break;
                case 5:
                    result.push_back("Five");
                    break;
                case 6:
                    result.push_back("Six");
                    break;
                case 7:
                    result.push_back("Seven");
                    break;
                case 8:
                    result.push_back("Eight");
                    break;
                case 9:
                    result.push_back("Nine");
            }
        } else {
            if (str.length() == 2) {
                switch (stoi(str)) {
                    case 10:
                        result.push_back("Ten");
                        break;
                    case 11:
                        result.push_back("Eleven");
                        break;
                    case 12:
                        result.push_back("Twelve");
                        break;
                    case 13:
                        result.push_back("Thirteen");
                        break;
                    case 14:
                        result.push_back("Fourteen");
                        break;
                    case 15:
                        result.push_back("Fifteen");
                        break;
                    case 16:
                        result.push_back("Sixteen");
                        break;
                    case 17:
                        result.push_back("Seventeen");
                        break;
                    case 18:
                        result.push_back("Eighteen");
                        break;
                    case 19:
                        result.push_back("Nineteen");
                }
            } else {
                string numStr = "";
                switch (num) {
                    case 20:
                        numStr = "Twenty";
                        break;
                    case 30:
                        numStr = "Thirty";
                        break;
                    case 40:
                        numStr = "Forty";
                        break;
                    case 50:
                        numStr = "Fifty";
                        break;
                    case 60:
                        numStr = "Sixty";
                        break;
                    case 70:
                        numStr = "Seventy";
                        break;
                    case 80:
                        numStr = "Eighty";
                        break;
                    case 90:
                        numStr = "Ninety";
                }
                if (num > 19) {
                    result.push_back(numStr);
                } else {
                    if (num == 0) {
                        continue;
                    }
                    switch (num) {
                        case 1:
                            result.push_back("One");
                            break;
                        case 2:
                            result.push_back("Two");
                            break;
                        case 3:
                            result.push_back("Three");
                            break;
                        case 4:
                            result.push_back("Four");
                            break;
                        case 5:
                            result.push_back("Five");
                            break;
                        case 6:
                            result.push_back("Six");
                            break;
                        case 7:
                            result.push_back("Seven");
                            break;
                        case 8:
                            result.push_back("Eight");
                            break;
                        case 9:
                            result.push_back("Nine");
                    }
                }
            }
        }
    }

    return result;
}