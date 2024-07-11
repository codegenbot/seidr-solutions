```cpp
#include <iostream>
#include <vector>
using namespace std;

int next_smallest(vector<int> lst) {
    if (lst.empty()) return -1; 
    vector<int> copy = lst;
    sort(copy.begin(), copy.end());
    for (int i = 0; i < copy.size() - 1; i++) {
        if (copy[i] != copy[i+1]) {
            return copy[i+1];
        }
    }
    return -1;
}

int main(){
    vector<int> lst;
    int n, num;
    
    cout << "Enter the number of elements: ";
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cout << "Enter element " << i + 1 << ": ";
        cin >> num;
        lst.push_back(num);
    }
    
    int result = next_smallest(lst);
    if(result == -1)cout << "All elements are the same.\n";
    else cout << "The next smallest number is: " << result << ".\n";

    return 0;
}