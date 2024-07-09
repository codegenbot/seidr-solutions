#include <vector>

int next_smallest(const vector<int>& lst) {
    if (lst.size() < 2) {
        return -1;
    }
    
    int smallest = lst[0];
    for (int i = 1; i < lst.size(); ++i) {
        if (lst[i] > smallest) {
            return lst[i];
        }
    }
    
    return -1;
}

int main() {
    vector<int> inputList = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    int result = next_smallest(inputList);
    
    return 0;
}  