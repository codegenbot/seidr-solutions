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
    // Add more test cases here
    
    return 0;
}