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
    std::vector<int> input = {2, -3, 4, -1, -2, 1, 5, -3};
    int result = basement(input);
    // use the result
    return 0;
}