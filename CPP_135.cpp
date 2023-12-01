#include <vector>

int can_arrange(vector<int> arr){
    int largestIndex = -1;
    for(int i = 1; i < arr.size(); i++){
        if(arr[i] < arr[i-1]){
            largestIndex = i-1;
        }
    }
    return largestIndex;
}

int main() {
    // Test the can_arrange function
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {5, 4, 3, 2, 1};
    vector<int> arr3 = {1, 3, 2, 4, 5};
    
    int result1 = can_arrange(arr1);
    int result2 = can_arrange(arr2);
    int result3 = can_arrange(arr3);
    
    // Print the results
    cout << "Result 1: " << result1 << endl;
    cout << "Result 2: " << result2 << endl;
    cout << "Result 3: " << result3 << endl;
    
    return 0;
}