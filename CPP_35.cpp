```
#include <iostream>
#include <vector>

float max_element(std::vector<float> l) {
    float max = l[0];
    for (int i = 1; i < l.size(); i++) {
        if (l[i] > max) {
            max = l[i];
        }
    }
    return max;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<float> arr(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> arr[i];
    }

    float max_val = max_element(arr);

    std::cout << "The maximum element is: " << max_val << std::endl;

    return 0;
}