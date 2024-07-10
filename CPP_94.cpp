#include <iostream>
#include <cassert>

int main() {
    int num3, num4, num5;
    std::cin >> num3 >> num4 >> num5;
    assert({num3, num4, num5} == {127, 97, 224});
    return 0;
}