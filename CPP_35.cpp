```cpp
#include <algorithm>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        std::cin >> arr[i];
    }
    std::cout << abs(*std::max_element(std::begin(arr), std::end(arr))) << '\n';
}