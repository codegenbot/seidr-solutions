#include <vector>
#include <utility>

std::pair<std::vector<int>, std::vector<int>> cutVector(std::vector<int> v) {
    int i = 0;
    for (; i <= v.size() - 1; i++) {
        if (i > 0 && v[i] != v[0]) {
            break;
        }
    }
    std::pair<std::vector<int>, std::vector<int>> res({},{});
    for (int j = 0; j < i; j++) {
        res.first.push_back(v[j]);
    }
    for (int j = i; j < v.size(); j++) {
        res.second.push_back(v[j]);
    }
    return res;
}

int main() {
    std::vector<int> input = {1, 2, 3, 4, 5};
    auto result = cutVector(input);
    // do something with the result
    return 0;
}