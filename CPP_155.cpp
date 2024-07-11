#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> even_odd_count(int num) {
    int even = 0, odd = 0;
    string str = to_string(abs(num));
    for (char c : str) {
        if (stoi(c) % 2 == 0)
            even++;
        else
            odd++;
    }
    return {even, odd};
}

int main() {
    assert(issame(even_odd_count(0), {1, 0}));
    return 0;
}