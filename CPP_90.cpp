#include <vector>

int next_smallest(vector<int> lst){
    if(lst.size() < 2) {
        return INT_MIN;
    }
    sort(lst.begin(), lst.end());
    int smallest = lst[0];
    for(int i = 1; i < lst.size(); i++) {
        if(lst[i] > smallest) {
            return lst[i];
        }
    }
    return INT_MIN;
}

int main() {
    // Test cases
    vector<int> lst1 = {3, 5, 2, 8, 1};
    vector<int> lst2 = {10, 7, 6, 4, 0};
    
    // Call the next_smallest function and print the result
    cout << next_smallest(lst1) << endl;  // Output: 2
    cout << next_smallest(lst2) << endl;  // Output: 4

    return 0;
}