#include <iostream>
#include <string>
#include <cassert>

using namespace std;

template<typename T, typename U>
auto compare_one(T a, U b) {
    if (a > b)
        return a;
    else if (a < b)
        return b;
    else 
        return "None";
}

int main() {
    assert(compare_one<string, string>("1", "2") == "2");
    return 0;
}