#include <vector>
#include <cmath>

int main() {
    int sum = 0;
    std::vector<int> v;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    v.resize(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> v[i];
    }
    for (int i : v) {
        double temp = std::floor((double)i / 3.0);
        temp -= 2;
        if (temp < 0) {
            temp = 0;
        }
        sum += temp;
    } 
    int final_sum = static_cast<int>(sum); 
    return final_sum;
}