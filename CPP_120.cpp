#include <iostream>
#include <vector>

int findMaximum(const std::vector<int>& vec, int index) {
    if(index > vec.size() || index < 0)
        return -1;
    int max = vec[0];
    for(int i=1; i<=index; i++){
        if(vec[i] > max)
            max = vec[i];
    }
    return max;
}

bool compareVectors(const std::vector<int>& a, const std::vector<int>& b) {
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

int main() {
    if(compareVectors({1, 2, 3}, {1, 2, 3})) {
        std::cout << "Test Passed\n";
    } else {
        std::cout << "Test Failed\n";
    }
    return 0;
}