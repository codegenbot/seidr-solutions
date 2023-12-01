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
    next_smallest(vector<int>{-35, 34, 12, -45});
    return 0;
}