#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    for(int i = 0; i < a.size(); i++) {
        if(a[i] % 2 == 0) {
            return true;
        }
    }
    return false;
}

int main() {
    assert(issame(generate_integers(17, 89), std::vector<int>()) == true);

    return 0;
}