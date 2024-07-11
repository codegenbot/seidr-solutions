#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool issame(int a, int b) {
    if (a > 9 || b > 9) {
        return false;
    }
    vector<string> result = by_length({a, b});
    for (int i = 0; i < min(result.size(), 2); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return true;
}

vector<string> by_length(vector<int> arr) {
    vector<vector<string>> result;
    
    for (int num : arr) {
        switch (num) {
            case 1:
                result.push_back({"One"});
                break;
            case 2:
                result.push_back({"Two"});
                break;
            case 3:
                result.push_back({"Three"});
                break;
            case 4:
                result.push_back({"Four"});
                break;
            case 5:
                result.push_back({"Five"});
                break;
            case 6:
                result.push_back({"Six"});
                break;
            case 7:
                result.push_back({"Seven"});
                break;
            case 8:
                result.push_back({"Eight"});
                break;
            case 9:
                result.push_back({"Nine"});
                break;
        }
    }
    
    return result;
}