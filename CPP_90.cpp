#include <iostream>
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
    vector<int> lst = {5, 3, 8, 2, 6};
    int result = next_smallest(lst);
    cout << "Next smallest number is: " << result << endl;
    
    return 0;
}