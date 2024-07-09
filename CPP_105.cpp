#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<vector<string>> by_length(vector<int> arr) {
    vector<string> num;
    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            switch (i) {
                case 1:
                    num.push_back("One");
                    break;
                case 2:
                    num.push_back("Two");
                    break;
                case 3:
                    num.push_back("Three");
                    break;
                case 4:
                    num.push_back("Four");
                    break;
                case 5:
                    num.push_back("Five");
                    break;
                case 6:
                    num.push_back("Six");
                    break;
                case 7:
                    num.push_back("Seven");
                    break;
                case 8:
                    num.push_back("Eight");
                    break;
                case 9:
                    num.push_back("Nine");
                    break;
            }
        } else if (i >= 10) {
            switch (i % 10) {
                case 1:
                    num.push_back(num[0] + "teen");
                    break;
                case 2:
                    num.push_back(num[i / 10 - 1] + "teen");
                    break;
                case 3:
                    num.push_back(num[i / 10 - 1] + "teen");
                    break;
                case 4:
                    if (i % 10 == 9) {
                        num.push_back("Ninety" + (num[0] == "One" ? "y" : ""));
                    } else {
                        num.push_back(num[i / 10 - 1] + "ty");
                    }
                    break;
                case 5:
                    if (i % 10 != 0) {
                        num.push_back("Ninety" + (num[0] == "One" ? "y" : ""));
                        num.push_back("Five");
                    } else {
                        num.push_back(num[i / 10 - 1] + "ty");
                    }
                    break;
                case 6:
                    if (i % 10 != 0) {
                        num.push_back(num[i / 10 - 1] + "ty and Six");
                    } else {
                        num.push_back(num[i / 10 - 1] + "ty");
                    }
                    break;
                case 7:
                    if (i % 10 != 0) {
                        num.push_back("Seven" + (num[0] == "One" ? "y" : ""));
                    } else {
                        num.push_back(num[i / 10 - 1] + "ty");
                    }
                    break;
                case 8:
                    if (i % 10 != 0) {
                        num.push_back("Eight" + (num[0] == "One" ? "y" : ""));
                    } else {
                        num.push_back(num[i / 10 - 1] + "ty");
                    }
                    break;
                case 9:
                    if (i % 10 != 0) {
                        num.push_back("Nine" + (num[0] == "One" ? "y" : ""));
                    } else {
                        num.push_back(num[i / 10 - 1] + "ty");
                    }
                    break;
            }
        } else if (i == 0) {
            num.push_back("Zero");
        }
    }

    vector<vector<string>> result = {num};
    return result;
}