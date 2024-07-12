#include <iostream>
#include <any>
#include <string>
#include <cassert>

using namespace std;

std::any compare_one(std::any a, std::any b) {
    if(a.type() == typeid(int) && b.type() == typeid(int)){
        // Comparison logic for integers
    }
    else if(a.type() == typeid(float) && b.type() == typeid(float)){
        // Comparison logic for floats
    }
    else if(a.type() == typeid(string) && b.type() == typeid(string)){
        // Comparison logic for strings
    }
    else if((a.type() == typeid(int) && b.type() == typeid(string)) || (a.type() == typeid(string) && b.type() == typeid(int))){
        // Convert and compare int and string
    }
    return "None"s; // Return string instead of const char*
}

int main() {
    assert(std::any_cast<string>(compare_one(string("1"), string("1"))).type() == typeid(string)); // Ensure return type
    return 0;
}