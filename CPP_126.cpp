#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool is_sorted(const vector<int>& lst){
    int n = lst.size();
    for(int i=1; i<n; i++){
        if(lst[i] <= lst[i-1]){
            return false;
        }
    }
    return true;
}

int main(){
    assert(is_sorted(vector<int>({1, 2, 3, 4})) == true);
    assert(is_sorted(vector<int>({4, 3, 2, 1})) == false);
    assert(is_sorted(vector<int>({1, 3, 2, 4})) == false);

    return 0;
}