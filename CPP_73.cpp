#include <vector>
#include <string>

int smallest_change(std::vector<int> arr) {
    std::string str = "";
    int n = arr.size(), left = 0, right = arr.size() - 1, changes = 0;
    for (int i : arr)
        str += to_string(i);
    while (left < right) {
        if (str[left] != str[right])
            ++changes;
        else
            ++left, --right;
    }
    return changes;

int main() {
    std::vector<int> arr; // input from user
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        arr.push_back(x);
    }
    
    int result = smallest_change(arr); // function call
    
    printf("The minimum number of changes to make the string a palindrome is: %d\n", result);
    
    return 0;
}