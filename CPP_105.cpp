#include <iostream>
#include <vector>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

vector<string> by_length(vector<int> arr) {
    vector<int> numArr;
    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            numArr.push_back(i);
        }
    }

    sort(numArr.begin(), numArr.end());

    reverse(numArr.begin(), numArr.end());

    vector<string> result;
    for (int i : numArr) {
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
    vector<int> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    vector<string> output = by_length(arr);

    if (output.size() == 9) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    for (string str : output)
        cout << str << " ";
    cout << endl;

    return 0;
}