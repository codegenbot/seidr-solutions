#include <iostream>
#include <vector>

using namespace std;

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
    vector<int> lst = {5, 3, 7, 1, 9};
    
    cout << next_smallest(lst) << endl;
    
    return 0;
}