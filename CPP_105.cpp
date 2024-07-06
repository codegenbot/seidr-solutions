#include <bits/stdc++.h>
using namespace std;

vector<string> by_length(vector<int> arr) {
    vector<string> result;
    for (int i : arr) {
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
    for (int i=0;i<n;i++) {
        int a;
        cin >> a;
        arr.push_back(a);
    }

    cout << "Input numbers in range 1-9 are : ";
    for(string x: by_length(arr)) {
        cout<<x<<" ";
    }
    
    return 0;
}