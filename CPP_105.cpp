#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool issame(vector<vector<string>> a, vector<vector<string>> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (issame(a[i], b[i])) {
            return false;
        }
    }
    return true;
}

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
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
        switch (i) {
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
                break;
        }
    }

    return result;
}

int main() {
    vector<int> input;
    
    for(int i = 0; i < 3; i++){
        cout << "Enter an integer (1-9):";
        int num;
        cin >> num;
        if(num >= 1 && num <= 9){
            input.push_back(num);
        } else {
            cout << "Invalid input. Please enter a number between 1 and 9.";
        }
    }

    vector<string> output = by_length(input);
    
    for (string str : output) {
        cout << str << endl;
    }
}