#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    if(a.size() != b.size())
        return false;
    for(int i=0;i<a.size();i++)
        if(a[i] != b[i])
            return false;
    return true;
}

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> result;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        if (n % 2 != 0) { 
            result.push_back(n);
        }
    }
    return result; // stop storing numbers when n becomes 1
}

int main() {
    std::vector<int> test = get_odd_collatz(6); 
    assert(issame(test , std::vector<int>({1, 3, 5, 7})));
}