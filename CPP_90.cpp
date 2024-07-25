#include <iostream>
#include <vector>
#include <algorithm>

int next_smallest(std::vector<int> lst) {
    if (lst.size() < 2) return -1; 
    int result = -1;
    for(int i=0;i<lst.size();i++){
        bool flag=true;
        for(int j=0;j<i;j++){
            if(lst[i]<lst[j]) {
                flag=false;
                break;
            }
        }
        if(flag){
            result=lst[i];
            break;
        }
    }
    return result; 
}

int main() {
    assert(next_smallest({-35, 34, 12, -45}) == -35);
    return 0;
}