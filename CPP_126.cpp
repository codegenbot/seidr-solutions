#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            vector<int> temp;
            for(int j = 0; j < i; j++)
                temp.push_back(lst[j]);
            if(count(temp.begin(), temp.end(), lst[i]) > 1)
                return false;
            break;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<int> lst(n);
    for(int i = 0; i < n; i++)
        cin >> lst[i];
    
    if(is_sorted(lst))
        cout << "The list is sorted." << endl;
    else
        cout << "The list is not sorted." << endl;

    return 0;
}