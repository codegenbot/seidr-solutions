\#include <iostream>
\#include <vector>
\#include <algorithm>

int next_smallest(std::vector<int> lst){
    if(lst.size() < 2){
        return -1;
    }
    std::sort(lst.begin(), lst.end());
    return lst[1];
}

int main(){
    assert(next_smallest({-35, 34, 12, -45}) == -35);
    // Add more test cases if needed
    return 0;
}