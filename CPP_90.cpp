#include <iostream>
#include <vector>

int next_smallest(std::vector<int> lst) {
    if (lst.empty()) return -1; 
    std::vector<int> copy = lst;
    std::sort(copy.begin(), copy.end());
    for (int i = 0; i < copy.size() - 1; i++) {
        if (copy[i] != copy[i+1]) {
            return copy[i+1];
        }
    }
    return -1; 
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> lst(n);
    for(int i=0; i<n; i++){
        std::cin >> lst[i];
    }

    int result = next_smallest(lst);

    std::cout << result << "\n";
    
    return 0;
}