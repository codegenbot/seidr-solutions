#include <iostream>
#include <vector>
using namespace std;

bool is_sorted(vector<int> lst) {
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            bool has_duplicates = false;
            for(int j = 0; j < lst.size(); j++){
                if(j != i && lst[j] == lst[i])
                    has_duplicates = true;
            }
            if(has_duplicates)
                return false;
        }
    }
    return true;
}

int main() {
    vector<int> lst;
    int n;
    cout << "Enter the number of elements in the list: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cout << "Enter element " << i+1 << ": ";
        cin >> x;
        lst.push_back(x);
    }
    if(is_sorted(lst))
        cout << "The list is sorted.\n";
    else
        cout << "The list is not sorted.\n";
    return 0;
}