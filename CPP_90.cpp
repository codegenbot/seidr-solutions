#include <vector>
#include <algorithm>
#include <climits>

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
    // Testing the next_smallest function
    vector<int> lst1 = {1, 3, 2, 4, 5};
    int result1 = next_smallest(lst1);
    
    vector<int> lst2 = {5, 4, 3, 2, 1};
    int result2 = next_smallest(lst2);
    
    // Print the results
    cout << "Result 1: " << result1 << endl;
    cout << "Result 2: " << result2 << endl;
    
    return 0;
}