#include <iostream>
#include <string>
#include <any>
#include <cassert>

using namespace std;

std::any compare_one(const std::string& str, int num);

int main() {
    assert(std::any_cast<std::string>(compare_one(std::string("1"), 1)) == "None");

    return 0;
}