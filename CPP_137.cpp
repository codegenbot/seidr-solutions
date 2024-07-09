#include <any>
#include <string>
#include <cassert>

using namespace std;

auto compare_one(const std::any& a, const std::any& b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if (any_cast<int>(a) > any_cast<int>(b))
            return a;
        else if (any_cast<int>(a) < any_cast<int>(b))
            return b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        if (any_cast<float>(a) > any_cast<float>(b))
            return a;
        else if (any_cast<float>(a) < any_cast<float>(b))
            return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (stof(any_cast<string>(a)) > stof(any_cast<string>(b)))
            return a;
        else if (stof(any_cast<string>(a)) < stof(any_cast<string>(b)))
            return b;
    }
    return any();
}

int main() {
    assert(any_cast<string>(compare_one(string("1"), string("2"))) == "2");
    
    return 0;
}