#include <vector>
#include <algorithm>

int next_smallest(std::vector<int> lst){
    std::vector<int> sorted = lst;
    std::sort(sorted.begin(), sorted.end());
    if (sorted.size() < 2) return -1; 
    for (int i = 0; i < sorted.size() - 1; i++) {
        if (sorted[i] != sorted[i + 1]) {
            return sorted[i + 1];
        }
    }
    return -1; 
}

int main(){
    assert(next_smallest({-35, 34, 12, -45}) == -35);
    std::vector<int> input;
    int n;
    while(true) {
        std::cout << "Enter a number (0 to stop): ";
        std::cin >> n;
        if(n == 0) break;
        input.push_back(n);
    }
    std::cout << "Next smallest is: " << next_smallest(input) << std::endl;
    return 0;
}