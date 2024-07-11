```cpp
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
    vector<int> numbers;
    vector<string> words;
    
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            numbers.push_back(num);
        }
        
        switch (num) {
            case 1:
                words.push_back("One");
                break;
            case 2:
                words.push_back("Two");
                break;
            case 3:
                words.push_back("Three");
                break;
            case 4:
                words.push_back("Four");
                break;
            case 5:
                words.push_back("Five");
                break;
            case 6:
                words.push_back("Six");
                break;
            case 7:
                words.push_back("Seven");
                break;
            case 8:
                words.push_back("Eight");
                break;
            case 9:
                words.push_back("Nine");
                break;
        }
    }
    
    sort(words.begin(), words.end());
    
    reverse(words.begin(), words.end());
    
    return words;
}

int main() {
    int a, b;
    cin >> a >> b;
    
    if (a == b) {
        vector<string> result = by_length({a});
        
        for (int i = 0; i < min(result.size(), 1); i++) {
            cout << result[i] << " ";
        }
        cout << endl;
    } else {
        issame(a, b);
    }
    
    return 0;
}