#include <vector>

int next_smallest(vector<int> lst){
    if(lst.size() < 2){
        return -1;
    }
    
    sort(lst.begin(), lst.end());
    
    int smallest = lst[0];
    int next_smallest_num = lst[1];
    
    if(smallest == next_smallest_num){
        return -1;
    }
    
    return next_smallest_num;
}

int main(){
    assert (next_smallest({-35, 34, 12, -45}) == -35);
    
    return 0;
}