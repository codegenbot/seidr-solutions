```cpp
#include <vector>
#include <algorithm>

using namespace std;

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i-1] > lst[i]){
            return false;
        }
        else if(count(lst.begin(), lst.end(), lst[i]) > 1){
            return false;
        }
    }
    return true;

int main() {
    vector<int> lst;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    for(int i = 0; i < n; i++){
        int x;
        cout << "Enter element " << i+1 << ": ";
        cin >> x;
        lst.push_back(x);
    }
    bool result = is_sorted(lst);
    cout << (result ? "True" : "False") << endl; 
}