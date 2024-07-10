#include <iostream>
#include <vector>

int next_smallest(std::vector<int> lst){
    std::vector<int> v(lst);
    std::sort(v.begin(), v.end());
    if (v.size() < 2) {
        return -1;
    }
    for (int i = 0; i < v.size()-1; i++) {
        if (v[i] != v[i+1]) {
            return v[i+1];
        }
    }
    return -1;
}

int main(){
    std::cout << next_smallest({-35, 34, 12, -45}) << std::endl;
}