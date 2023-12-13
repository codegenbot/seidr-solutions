
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    // ...
}

std::vector<int> even_odd_count(int num);

int my_main() {
    assert(issame(even_odd_count(0), {1, 0}));
    return 0;
}

int main() {
    my_main();
}
```