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
    int n;
    std::cin >> n;

    std::vector<int> expected = f(n);
    std::vector<int> result = f(n);

    if(issame(expected, result)){
        std::cout << "Test Passed" << std::endl;
    } else {
        std::cout << "Test Failed" << std::endl;
    }

    return 0;
}