```cpp
#include <iostream>
#include <vector>

using namespace std;

int smallest_change(vector<int> arr) {
    int n = arr.size();
    string str = "";
    for (int i : arr) {
        str += to_string(i);
    }
    
    int left = 0, right = n - 1;
    int changes = 0;
    
    while (left < right) {
        if (str[left] != str[right]) {
            changes++;
            left++;
        } else {
            left++;
            right--;
        }
    }
    
    return changes;

}

int main() {
    int result = smallest_change({0, 1});
    cout << "Smallest change is: " << result << endl;
    return 0;
}