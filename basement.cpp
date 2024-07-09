```cpp
#include <vector>

int basement(std::vector<int>& v) {
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
        if (sum < 0)
            return i + 1;
    }
    return -1;

}

int main() {
    std::vector<int> v;
    int num;
    while(std::cin >> num) {
        v.push_back(num);
    }
    int result = basement(v);
    std::cout << "The basement is at index " << result << "." << std::endl;
    return 0;
}