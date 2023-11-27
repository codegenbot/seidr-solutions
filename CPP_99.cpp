#include <string>
#include <cassert>

int closest_integer(std::string value){
    float num = std::stof(value);
    int closest = std::round(num);
    if (num - closest == 0.5) {
        if (num > 0) {
            closest++;
        } else {
            closest--;
        }
    }
    return closest;
}

int main() {
    assert(closest_integer("0") == 0);
    assert(closest_integer("1.3") == 1);
    assert(closest_integer("1.6") == 2);
    assert(closest_integer("-1.3") == -1);
    assert(closest_integer("-1.6") == -2);
    assert(closest_integer("5.5") == 6);
    assert(closest_integer("-5.5") == -6);
    // Add more test cases here
    return 0;
}