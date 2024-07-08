```
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool issame(int a, int b) {
    return (a >= 1 && a <= 9 && b >= 1 && b <= 9);
}

vector<string> by_length(vector<int> arr) {
    vector<vector<string>> result;
    for (int i = 0; i < arr.size(); i++) {
        string str;
        if (!issame(arr[i], arr[(i+1)%arr.size()])) {
            switch (arr[i]) {
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
            result.push_back({str});
        } else {
            if (i > 0) {
                result[result.size()-1].push_back(str);
            } else {
                result.push_back({str});
            }
        }
    }
    
    return result;
}