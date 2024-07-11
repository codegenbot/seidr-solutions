#include <vector>
using namespace std;

bool is_sorted(vector<int> lst);

int main() {
    vector<int> lst = {1, 2, 3};
    if(is_sorted(lst)) {
        cout << "The list is sorted." << endl;
    } else {
        cout << "The list is not sorted." << endl;
    }
    return 0;
}

bool is_sorted(vector<int> lst) {
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]) 
            return false;
    }
    return true;
}