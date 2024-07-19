#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> f(int n);

int main() {
    // Add your test cases here to check the functions
    std::vector<int> a = {1, 3, 5};
    std::vector<int> b = {1, 3, 5};
    assert(issame(a, b) == true);

    std::vector<int> c = {2, 4, 6};
    std::vector<int> d = {2, 4, 6};
    assert(issame(c, d) == true);

    std::vector<int> e = {1, 4, 7};
    std::vector<int> f = {1, 4, 6};
    assert(issame(e, f) == false);

    std::vector<int> result = f(5);
    assert(result == std::vector<int>{1, 3, 2, 10, 5});

    return 0;
}

bool issame(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(size_t i = 0; i < a.size(); ++i){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

std::vector<int> f(int n){
    std::vector<int> result(n);
    for(int i = 1; i <= n; ++i){
        if(i % 2 == 0){
            int factorial = 1;
            for(int j = 1; j <= i; ++j){
                factorial *= j;
            }
            result[i-1] = factorial;
        } else {
            int sum = 0;
            for(int j = 1; j <= i; ++j){
                sum += j;
            }
            result[i-1] = sum;
        }
    }
    return result;
}