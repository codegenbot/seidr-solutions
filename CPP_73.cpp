#include <vector>
#include <string>

int main() {
    int n;
    std::vector<int> arr;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    std::cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        int num;
        std::cin >> num;
        arr.push_back(num);
    }
    
    int smallest = smallest_change(arr);
    std::cout << "Smallest change needed is: " << smallest << std::endl;
    return 0;
}

int smallest_change(vector<int> arr) {
    int n = arr.size();
    string s = "";
    for (int i : arr) {
        s += to_string(i);
    }
    int left = 0, right = n - 1;
    int changes = 0;
    while (left < right) {
        if (s[left] != s[right]) {
            changes++;
            left++;
        } else {
            left++;
            right--;
        }
    }
    return changes;
}