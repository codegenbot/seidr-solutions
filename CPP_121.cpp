#include <vector>

int solutions(vector<int> lst){
    int sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (i % 2 == 0 && lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    // Your test cases go here
    
    // Test case 1
    vector<int> lst1 = {1, 2, 3, 4, 5};
    int result1 = solutions(lst1);
    // Expected output: 9
    
    // Test case 2
    vector<int> lst2 = {2, 4, 6, 8, 10};
    int result2 = solutions(lst2);
    // Expected output: 0
    
    // Test case 3
    vector<int> lst3 = {1, 3, 5, 7, 9};
    int result3 = solutions(lst3);
    // Expected output: 25
    
    return 0;
}