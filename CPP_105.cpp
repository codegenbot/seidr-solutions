#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}

int main() {
    vector<int> arr;
    cout << "Enter numbers: ";
    int n; 
    while (cin >> n) {
        if (n >= 0 && n <= 9) {
            arr.push_back(n);
        }
    }
    
    // sort in descending order
    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());

    vector<string> words;
    for (int i : arr) {
        switch (i) {
            case 0:
                words.push_back("Zero");
                break;
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

    cout << "Input: ";
    for (int i : arr) {
        switch(i){
            case 0:
                cout << "Zero";
                break;
            case 1:
                cout << "One";
                break;
            case 2:
                cout << "Two";
                break;
            case 3:
                cout << "Three";
                break;
            case 4:
                cout << "Four";
                break;
            case 5:
                cout << "Five";
                break;
            case 6:
                cout << "Six";
                break;
            case 7:
                cout << "Seven";
                break;
            case 8:
                cout << "Eight";
                break;
            case 9:
                cout << "Nine";
                break;
        }
        cout << " ";
    }
    cout << endl;
    
    return 0;
}