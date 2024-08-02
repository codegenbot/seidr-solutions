#include <iostream>
#include <vector>

int can_arrange(std::vector<int> arr) {
    int prev = arr[0];
    for(int i=1; i<arr.size(); i++){
        if(arr[i] >= prev) return i;
        prev = arr[i];
    }
    return -1;
}

int main() {
    assert(can_arrange({}) == -1);
    std::cout << "Code is fixed." << std::endl;
    return 0;
}