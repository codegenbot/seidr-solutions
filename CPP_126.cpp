#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool is_sorted(vector<int> lst) {
    bool isSorted = true;
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            isSorted = false;
            break;
        }
    }
    return isSorted;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> lst;
    for(int i = 0; i < n; i++) {
        int num;
        cout << "Enter element " << (i+1) << ": ";
        cin >> num;
        lst.push_back(num);
    }

    if(is_sorted(lst)) {
        cout << "The list is sorted." << endl;
    } else {
        cout << "The list is not sorted." << endl;
    }
    
    return 0;
}