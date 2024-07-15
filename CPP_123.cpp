#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    
    return true;
}

std::vector<int> calculateSequence(int n) {
    std::vector<int> result;
    
    while (n != 1) {
        if (n % 2 == 1) {
            result.push_back(n);
        }
        n = (n % 2 == 0) ? n / 2 : 3 * n + 1;
    }
    
    result.push_back(1);
    std::sort(result.begin(), result.end());
    return result;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> result = calculateSequence(n);
    
    assert(issame(result, calculateSequence(n)));

    return 0;
}