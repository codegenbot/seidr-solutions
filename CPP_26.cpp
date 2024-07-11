#include <vector>
#include <algorithm>

bool same(std::vector<int> a,std::vector<int>b){
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::vector<int> uniqueNumbers;
    for (int num : numbers) {
        if (find(uniqueNumbers.begin(), uniqueNumbers.end(), num) == uniqueNumbers.end()) {
            uniqueNumbers.push_back(num);
        }
    }
    return uniqueNumbers;
}

int main() {
    assert(same(remove_duplicates({1, 2, 3, 2, 4, 3, 5}) , {1, 4, 5}));
    return 0;
}