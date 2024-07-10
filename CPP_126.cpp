#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool is_sorted(vector<int> lst){
    bool isSorted = true;
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            isSorted = false;
            break;
        }
    }
    return isSorted;
}

int main(){
    int n, temp;
    vector<int> lst;

    cout << "Enter the number of elements in your array: ";
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> temp;
        lst.push_back(temp);
    }

    if(is_sorted(lst))
        cout << "The array is sorted."<<endl;
    else
        cout << "The array is not sorted."<<endl;

    return 0;
}