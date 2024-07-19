#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    bool is_sorted(vector<int> lst) {
        for(int i = 1; i < lst.size(); i++){
            if(lst[i] <= lst[i-1]){
                if(std::count(lst.begin(), lst.end(), lst[i]) > 1)
                    return false;
            }
        }
        return true;
    }

    int main() {
        vector<int> lst;
        int n, temp;
        cout << "Enter the number of elements: ";
        cin >> n;

        for(int i = 0; i < n; i++) {
            cin >> temp;
            lst.push_back(temp);
        }

        if(is_sorted(lst))
            cout << "The list is sorted." << endl;
        else
            cout << "The list is not sorted." << endl;

        return 0;
    }