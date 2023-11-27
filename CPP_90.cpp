#include <vector>
#include <algorithm>

int next_smallest(vector<int> lst){
    if(lst.size() < 2){
        return -1;
    }
    
    sort(lst.begin(), lst.end());
    
    int smallest = lst[0];
    int second_smallest = lst[1];
    
    if(smallest == second_smallest){
        return -1;
    }
    
    return second_smallest;
}

int main() {
    vector<int> lst = {5, 2, 8, 3, 1};
    int result = next_smallest(lst);
    return result;
}