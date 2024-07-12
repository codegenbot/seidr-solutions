#include <vector>

int main() {
    int sum = 0;
    std::vector<int> lst = {3, 13, 2, 9}; 
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}