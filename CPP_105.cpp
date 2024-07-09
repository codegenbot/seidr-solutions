```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> by_length(vector<int> arr) {
    vector<int> sortedArr;
    for (int i : arr) {
        if (i >= 1 && i <= 9)
            sortedArr.push_back(i);
    }
    sort(sortedArr.begin(), sortedArr.end());
    reverse(sortedArr.begin(), sortedArr.end());
    vector<string> result;
    for (int i : sortedArr) {
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

int main() {
    assert(issame(by_length({9, 4, 8}) , {"Nine", "Four", "Eight"}));
    return 0;
}