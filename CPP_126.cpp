#include <iostream>
#include <vector>
using namespace std;

bool is_sorted(vector<int> lst) {
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            return false;
        }
    }
    return true;
}

int main() {
    cout << (is_sorted({1, 2, 3, 4}) ? "true" : "false") << endl;
    return 0;
}