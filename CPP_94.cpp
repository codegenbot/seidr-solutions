#include <iostream>
#include <cassert>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    assert({a, b, c} == {127, 97, 224});
    return 0;
}