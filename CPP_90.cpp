#include <iostream>
#include <vector>
#include <algorithm>

int next_smallest(std::vector<int> lst) {
    if(lst.size() < 2) return -1; // Return None in Python
    std::vector<int> v = lst;
    sort(v.begin(), v.end());
    for(int i=1; i<v.size(); i++){
        if(v[i] != v[0]){
            return v[i];
        }
    }
    return -1; // Return None in Python
}

int main() {
    assert (next_smallest({-35, 34, 12, -45}) == -35);
    std::cout << "Code executed successfully." << std::endl;
    return 0;
}