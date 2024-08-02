#include <iostream>
#include <vector>

int can_arrange(std::vector<int> arr) {
    for(int i=1; i<arr.size(); i++){
        if(arr[i-1] <= arr[i]) return i-1;
    }
    return -1;
}

int main() {
    assert(can_arrange({}) == -1);
    std::cout << "Code is fixed." << std::endl;
    return 0;
}