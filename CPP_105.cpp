#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<string> a,vector<string>b){
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}

vector<string> by_length(vector<int> arr) {
    vector<string> result;
    for (int i : arr) {
        switch (i) {
            case 0:
                result.push_back("Zero");
                break;
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
    int n;
    cin >> n;
    
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<string> res = by_length(arr);

    cout << "The resulting string is: ";
    for(string s : res) {
        cout << s << " ";
    }
    
    return 0;
}