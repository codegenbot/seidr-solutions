#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size(); i++)
        if(a[i] != b[i])
            return false;
    return true;
}

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> result;
    while (n != 1) {
        if (n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;
        result.push_back(n);
    }
    std::sort(result.begin(), result.end());
    return result;
}

std::vector<std::vector<int>> get_collatz_sequence(int n) {
    std::vector<std::vector<int>> sequences;
    for(int i=1; i<=n; i++) {
        sequences.emplace_back(get_odd_collatz(i));
    }
    return sequences;
}

int main() {
    auto collatz_sequences = get_collatz_sequence(12);
    bool result = issame({collatz_sequences[0]}, {1,2,6});
    std::cout << (result ? "True" : "False") << std::endl;
    return 0;
}