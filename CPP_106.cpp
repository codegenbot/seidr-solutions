#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    assert(a.size() == b.size());

    for(size_t i = 0; i < a.size(); ++i){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> f(int n);

    std::vector<int> result1 = f(4);
    std::vector<int> expected1 = {1, 3, 2, 10};
    assert(issame(result1, expected1));

    std::vector<int> result2 = f(5);
    std::vector<int> expected2 = {1, 3, 2, 10, 3};
    assert(issame(result2, expected2));

    // Add more test cases as needed

    return 0;
}