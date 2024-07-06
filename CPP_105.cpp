#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) {
        return false;
    }
    
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

vector<vector<string>> by_length(const vector<int>& arr) {
    vector<vector<string>> result(10, vector<string>());
    
    for (int i : arr) {
        switch (i) {
            case 1:
                result[1].push_back("One");
                break;
            case 2:
                result[1].push_back("Two");
                break;
            case 3:
                result[1].push_back("Three");
                break;
            case 4:
                for(int j = 0; j < arr.size();j++) {
                    if(arr[j] == 4) {
                        if(j < 9) {
                            switch (arr[j]) {
                                case 1:
                                    result[1].push_back("One");
                                    break;
                                case 2:
                                    result[1].push_back("Two");
                                    break;
                                case 3:
                                    result[1].push_back("Three");
                                    break;
                                case 4:
                                    result[1].push_back("Four");
                                    break;
                                case 5:
                                    result[1].push_back("Five");
                                    break;
                                case 6:
                                    result[1].push_back("Six");
                                    break;
                                case 7:
                                    result[1].push_back("Seven");
                                    break;
                                case 8:
                                    result[1].push_back("Eight");
                                    break;
                                case 9:
                                    result[1].push_back("Nine");
                                    break;
                            }
                        } else {
                            if(i >= 1 && i <= 9) {
                                switch (i) {
                                    case 1:
                                        result[i].push_back("One");
                                        break;
                                    case 2:
                                        result[i].push_back("Two");
                                        break;
                                    case 3:
                                        result[i].push_back("Three");
                                        break;
                                    case 4:
                                        result[i].push_back("Four");
                                        break;
                                    case 5:
                                        result[i].push_back("Five");
                                        break;
                                    case 6:
                                        result[i].push_back("Six");
                                        break;
                                    case 7:
                                        result[i].push_back("Seven");
                                        break;
                                    case 8:
                                        result[i].push_back("Eight");
                                        break;
                                    case 9:
                                        result[i].push_back("Nine");
                                        break;
                                }
                            } else {
                                if(i == 4) {
                                    result[1].push_back("Four");
                                }
                            }
                        }
                    }
                }
                break;
            case 5:
                for(int j = 0; j < arr.size();j++) {
                    if(arr[j] == 5) {
                        if(j < 9) {
                            switch (arr[j]) {
                                case 1:
                                    result[1].push_back("One");
                                    break;
                                case 2:
                                    result[1].push_back("Two");
                                    break;
                                case 3:
                                    result[1].push_back("Three");
                                    break;
                                case 4:
                                    result[1].push_back("Four");
                                    break;
                                case 5:
                                    result[1].push_back("Five");
                                    break;
                                case 6:
                                    result[1].push_back("Six");
                                    break;
                                case 7:
                                    result[1].push_back("Seven");
                                    break;
                                case 8:
                                    result[1].push_back("Eight");
                                    break;
                                case 9:
                                    result[1].push_back("Nine");
                                    break;
                            }
                        } else {
                            if(i >= 1 && i <= 9) {
                                switch (i) {
                                    case 1:
                                        result[i].push_back("One");
                                        break;
                                    case 2:
                                        result[i].push_back("Two");
                                        break;
                                    case 3:
                                        result[i].push_back("Three");
                                        break;
                                    case 4:
                                        result[i].push_back("Four");
                                        break;
                                    case 5:
                                        result[i].push_back("Five");
                                        break;
                                    case 6:
                                        result[i].push_back("Six");
                                        break;
                                    case 7:
                                        result[i].push_back("Seven");
                                        break;
                                    case 8:
                                        result[i].push_back("Eight");
                                        break;
                                    case 9:
                                        result[i].push_back("Nine");
                                        break;
                                }
                            } else {
                                if(i == 5) {
                                    result[1].push_back("Five");
                                }
                            }
                        }
                    }
                }
                break;
            case 6:
                for(int j = 0; j < arr.size();j++) {
                    if(arr[j] == 6) {
                        if(j < 9) {
                            switch (arr[j]) {
                                case 1:
                                    result[1].push_back("One");
                                    break;
                                case 2:
                                    result[1].push_back("Two");
                                    break;
                                case 3:
                                    result[1].push_back("Three");
                                    break;
                                case 4:
                                    result[1].push_back("Four");
                                    break;
                                case 5:
                                    result[1].push_back("Five");
                                    break;
                                case 6:
                                    result[1].push_back("Six");
                                    break;
                                case 7:
                                    result[1].push_back("Seven");
                                    break;
                                case 8:
                                    result[1].push_back("Eight");
                                    break;
                                case 9:
                                    result[1].push_back("Nine");
                                    break;
                            }
                        } else {
                            if(i >= 1 && i <= 9) {
                                switch (i) {
                                    case 1:
                                        result[i].push_back("One");
                                        break;
                                    case 2:
                                        result[i].push_back("Two");
                                        break;
                                    case 3:
                                        result[i].push_back("Three");
                                        break;
                                    case 4:
                                        result[i].push_back("Four");
                                        break;
                                    case 5:
                                        result[i].push_back("Five");
                                        break;
                                    case 6:
                                        result[i].push_back("Six");
                                        break;
                                    case 7:
                                        result[i].push_back("Seven");
                                        break;
                                    case 8:
                                        result[i].push_back("Eight");
                                        break;
                                    case 9:
                                        result[i].push_back("Nine");
                                        break;
                                }
                            } else {
                                if(i == 6) {
                                    result[1].push_back("Six");
                                }
                            }
                        }
                    }
                }
                break;
            case 7:
                for(int j = 0; j < arr.size();j++) {
                    if(arr[j] == 7) {
                        if(j < 9) {
                            switch (arr[j]) {
                                case 1:
                                    result[1].push_back("One");
                                    break;
                                case 2:
                                    result[1].push_back("Two");
                                    break;
                                case 3:
                                    result[1].push_back("Three");
                                    break;
                                case 4:
                                    result[1].push_back("Four");
                                    break;
                                case 5:
                                    result[1].push_back("Five");
                                    break;
                                case 6:
                                    result[1].push_back("Six");
                                    break;
                                case 7:
                                    result[1].push_back("Seven");
                                    break;
                                case 8:
                                    result[1].push_back("Eight");
                                    break;
                                case 9:
                                    result[1].push_back("Nine");
                                    break;
                            }
                        } else {
                            if(i >= 1 && i <= 9) {
                                switch (i) {
                                    case 1:
                                        result[i].push_back("One");
                                        break;
                                    case 2:
                                        result[i].push_back("Two");
                                        break;
                                    case 3:
                                        result[i].push_back("Three");
                                        break;
                                    case 4:
                                        result[i].push_back("Four");
                                        break;
                                    case 5:
                                        result[i].push_back("Five");
                                        break;
                                    case 6:
                                        result[i].push_back("Six");
                                        break;
                                    case 7:
                                        result[i].push_back("Seven");
                                        break;
                                    case 8:
                                        result[i].push_back("Eight");
                                        break;
                                    case 9:
                                        result[i].push_back("Nine");
                                        break;
                                }
                            } else {
                                if(i == 7) {
                                    result[1].push_back("Seven");
                                }
                            }
                        }
                    }
                }
                break;
            case 8:
                for(int j = 0; j < arr.size();j++) {
                    if(arr[j] == 8) {
                        if(j < 9) {
                            switch (arr[j]) {
                                case 1:
                                    result[1].push_back("One");
                                    break;
                                case 2:
                                    result[1].push_back("Two");
                                    break;
                                case 3:
                                    result[1].push_back("Three");
                                    break;
                                case 4:
                                    result[1].push_back("Four");
                                    break;
                                case 5:
                                    result[1].push_back("Five");
                                    break;
                                case 6:
                                    result[1].push_back("Six");
                                    break;
                                case 7:
                                    result[1].push_back("Seven");
                                    break;
                                case 8:
                                    result[1].push_back("Eight");
                                    break;
                                case 9:
                                    result[1].push_back("Nine");
                                    break;
                            }
                        } else {
                            if(i >= 1 && i <= 9) {
                                switch (i) {
                                    case 1:
                                        result[i].push_back("One");
                                        break;
                                    case 2:
                                        result[i].push_back("Two");
                                        break;
                                    case 3:
                                        result[i].push_back("Three");
                                        break;
                                    case 4:
                                        result[i].push_back("Four");
                                        break;
                                    case 5:
                                        result[i].push_back("Five");
                                        break;
                                    case 6:
                                        result[i].push_back("Six");
                                        break;
                                    case 7:
                                        result[i].push_back("Seven");
                                        break;
                                    case 8:
                                        result[i].push_back("Eight");
                                        break;
                                    case 9:
                                        result[i].push_back("Nine");
                                        break;
                                }
                            } else {
                                if(i == 8) {
                                    result[1].push_back("Eight");
                                }
                            }
                        }
                    }
                }
                break;
            case 9:
                for(int j = 0; j < arr.size();j++) {
                    if(arr[j] == 9) {
                        if(j < 9) {
                            switch (arr[j]) {
                                case 1:
                                    result[1].push_back("One");
                                    break;
                                case 2:
                                    result[1].push_back("Two");
                                    break;
                                case 3:
                                    result[1].push_back("Three");
                                    break;
                                case 4:
                                    result[1].push_back("Four");
                                    break;
                                case 5:
                                    result[1].push_back("Five");
                                    break;
                                case 6:
                                    result[1].push_back("Six");
                                    break;
                                case 7:
                                    result[1].push_back("Seven");
                                    break;
                                case 8:
                                    result[1].push_back("Eight");
                                    break;
                                case 9:
                                    result[1].push_back("Nine");
                                    break;
                            }
                        } else {
                            if(i >= 1 && i <= 9) {
                                switch (i) {
                                    case 1:
                                        result[i].push_back("One");
                                        break;
                                    case 2:
                                        result[i].push_back("Two");
                                        break;
                                    case 3:
                                        result[i].push_back("Three");
                                        break;
                                    case 4:
                                        result[i].push_back("Four");
                                        break;
                                    case 5:
                                        result[i].push_back("Five");
                                        break;
                                    case 6:
                                        result[i].push_back("Six");
                                        break;
                                    case 7:
                                        result[i].push_back("Seven");
                                        break;
                                    case 8:
                                        result[i].push_back("Eight");
                                        break;
                                    case 9:
                                        result[i].push_back("Nine");
                                        break;
                                }
                            } else {
                                if(i == 9) {
                                    result[1].push_back("Nine");
                                }
                            }
                        }
                    }
                }
                break;
            default:
                std::cout << "Error: Invalid number of occurrences." << std::endl;
        }
    }

    return 0;
}