```c++
#include <vector>
#include <algorithm>
#include <string>

bool issame(vector<string> a, vector<string>b) {
    if (a == b)
        return true;
    else
        return false;
}

int main() {
    vector<int> arr = {1, 3, 9};
    vector<string> result = by_length(arr);
    
    for (string s : result) {
        cout << s << endl;
    }
    
    if(issame(result, {"One", "Three", "Nine"})) {
        cout << "The strings are the same." << endl;
    } else {
        cout << "The strings are not the same." << endl;
    }
    
    return 0;
}

vector<string> by_length(vector<int> arr) {
    vector<string> temp;
    for (int i : arr) {
        if (i >= 1 && i <= 9)
            temp.push_back(to_string(i));
    }
    sort(temp.begin(), temp.end());
    reverse(temp.begin(), temp.end());
    vector<string> result;
    for (string s : temp) {
        switch (stoi(s)) {
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