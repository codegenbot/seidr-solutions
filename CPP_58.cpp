#include <vector>
#include <algorithm>
#include <set>
#include <iostream>

bool issame(std::vector<int> a, std::vector<int> b) {
    return (common(a, b).size() == 0) ? true : false;
}

int main(){
    std::vector<int> l1 = {1, 2, 3, 4};
    std::vector<int> l2 = {3, 4, 5, 6};

    if(l1.size() > l2.size()) {
        for(int i : l1) {
            if(std::find(l2.begin(), l2.end(), i) == l2.end())
                break;
        }
    } else {
        for(int i : l2) {
            if(std::find(l1.begin(), l1.end(), i) == l1.end())
                break;
        }
    }

    std::cout << "All elements of one list are present in another." << std::endl;

    return 0;
}