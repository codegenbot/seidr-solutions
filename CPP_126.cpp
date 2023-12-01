#include <vector>
#include <cassert>

using namespace std;

bool is_sorted(vector<int> lst){
    int n = lst.size();
    for(int i=1; i<n; i++){
        if(lst[i] <= lst[i-1]){
            return false;
        }
    }
    return true;
}

int main(){
    assert (is_sorted({1, 2, 3, 4}) == true);
    assert (is_sorted({4, 3, 2, 1}) == false);
    return 0;
}