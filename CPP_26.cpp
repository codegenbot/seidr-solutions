#include <algorithm>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> remove_duplicates(std::vector<int> arr) {
    std::vector<int> result;
    for (int i : arr) {
        if (std::find(result.begin(), result.end(), i) == result.end()) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 3, 5};
    std::vector<int> test1(arr, arr + sizeof(int) / sizeof(0));
    std::vector<int> test2 = remove_duplicates(test1);
    if (issame(test1, test2)) {
        for (int i : test2) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Test failed" << std::endl;
    }
    return 0;
}