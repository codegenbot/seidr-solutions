```cpp
#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> by_length(vector<int> arr) {
    vector<int> sortedArr;
    for (int num : arr) {
        switch (num % 10) {
            case 1:
                sortedArr.push_back(1);
                break;
            case 2:
            case 3:
            case 4:
            case 5:
                sortedArr.push_back(2);
                break;
            case 6:
            case 7:
            case 8:
                sortedArr.push_back(3);
                break;
            case 9:
                sortedArr.push_back(1);
                break;
        }
    }
    reverse(sortedArr.begin(), sortedArr.end());
    vector<string> result;
    for (int num : sortedArr) {
        switch (num) {
            case 1:
                result.push_back("One");
                break;
            case 2:
                switch (sortedArr.back()) % 10 {
                    case 0: result.push_back("Zero"); 
                    case 1: result.push_back("Ten"); 
                    case 2: result.push_back("Eleven"); 
                    case 3: result.push_back("Twelve");
                    case 4: result.push_back("Thirteen"); 
                    case 5: result.push_back("Fourteen");
                    case 6: result.push_back("Fifteen");
                    case 7: result.push_back("Sixteen");
                    case 8: result.push_back("Seventeen");
                    case 9: result.push_back("Eighteen");
                }
                sortedArr.pop_back();
                break;
            case 3:
                switch (sortedArr.back()) % 10 {
                    case 0: result.push_back("Zero"); 
                    case 1: result.push_back("Ten"); 
                    case 2: result.push_back("Twelve");
                    case 3: result.push_back("Thirteen"); 
                    case 4: result.push_back("Fourteen");
                    case 5: result.push_back("Fifteen");
                    case 6: result.push_back("Sixteen");
                    case 7: result.push_back("Seventeen");
                    case 8: result.push_back("Eighteen");
                    case 9: result.push_back("Nineteen");
                }
                sortedArr.pop_back();
                break;
            default:
                switch (num) {
                    case 1:
                        for (int i = 0; i < 10; ++i) {
                            result.push_back(to_string(i + 1));
                        }
                    case 2: 
                    case 3:
                        for (int i = 10; i <= 18; ++i) {
                            result.push_back(to_string(i));
                        }
                }
        }
    }
    return result;
}