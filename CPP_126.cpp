#include <vector>
using namespace std;

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]) return false;
    }
    return true;
}

int main(){
    vector<int> lst;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        int val;
        cout << "Enter element " << i+1 << ": ";
        cin >> val;
        lst.push_back(val);
    }
    if(is_sorted(lst)) cout << "The list is sorted." << endl;
    else cout << "The list is not sorted." << endl;
    return 0;
}