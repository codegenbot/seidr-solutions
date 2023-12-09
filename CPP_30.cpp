```
#include <vector>

bool issame(std::vector<float> a, std::vector<float> b){
    return a == b;
}

int main() {
    assert (issame({1.0, 2.0, 3.0}, {1.0, 2.0, 3.0}));
    assert (issame({-1.0, -2.0, -3.0}, {-1.0, -2.0, -3.0}));
    return 0;
}
```