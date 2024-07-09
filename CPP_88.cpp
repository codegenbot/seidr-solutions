```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(int x, int y) {
    if (x == y)
        return true;
    else
        return false;
}

std::vector<int> sort_array(std::vector<int> array) {
    int sum = 0;
    for(int i=0; i<array.size(); i++)
        sum += array[i];
    
    if (sum % 2 == 0) {
        std::sort(array.begin(), array.end(), greater<int>());
    } else {
        std::sort(array.begin(), array.end());
    }
    return array;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> array(n);
    for(int i=0; i<n; i++) {
        std::cin >> array[i];
    }

    sort_array(array);

    for(auto x:array)
        std::cout << x << " ";
    return 0;
}