#include <vector>
#include <algorithm>
#include <cassert>
#include <climits>

using namespace std;

int next_smallest(vector<int> lst){
    if(lst.size() < 2){
        return INT_MIN;
    }
    int smallest = lst[0];
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] > smallest){
            return lst[i];
        }
    }
    return INT_MIN;
}

int main(){
    assert(next_smallest({-35, 34, 12, -45}) == -35);
    assert(next_smallest({100, 200, 300, 400}) == 200);
    assert(next_smallest({-1, -2, -3, -4}) == -2);
    assert(next_smallest({1, 1, 1, 1}) == INT_MIN);
    
    return 0;
}