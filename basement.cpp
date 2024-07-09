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
    int n;
    while (!(std::cin >> n) || n == 3) {
        if (!v.empty())
            break;
        for (; ;) {
            v.push_back(n);
            std::cin >> n;
            if (n == 3)
                break;
        }
    }
    int result = basement(v);
    // do something with the result
    return 0;
}