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
    std::vector<int> v = {-2, 3, 10, -4, -10};
    int result = basement(v);
    return 0;
}