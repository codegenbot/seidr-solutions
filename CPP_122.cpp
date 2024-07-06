#include <iostream>
#include <vector>
#include <cmath>

int add_elements(std::vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        if (log10(arr[i]) + 1 <= 2) {
            sum += arr[i];
        }
    }
    return sum;

}

int main() {
    std::vector<int> input;
    int k;
    cout << "Enter elements: ";
    for(int i = 0; i < k; i++) {
        int temp;
        cin >> temp;
        input.push_back(temp);
    }
    
    cout << "Sum of elements: " << add_elements(input, k) << endl;
    return 0;
}