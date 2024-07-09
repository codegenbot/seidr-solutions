#include <vector>

int basement(std::vector<int>& v) {
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
        if (sum < 0)
            return i;
    }
    return -1;

}

int main() {
    std::vector<int> v = {-2, 3, 1, -5, 4};
    int result = basement(v);
    std::cout << "First index where the sum becomes negative is: " << result << std::endl;
    return 0;
}