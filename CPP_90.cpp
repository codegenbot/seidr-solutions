#include <iostream>
#include <vector>
#include <algorithm>

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
    vector<int> numbers = {5, 7, 2, 8, 4, 6};
    int result = next_smallest(numbers);
    cout << "Next smallest number: " << result << endl;
    
    return 0;
}