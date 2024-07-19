#include <any>
#include <boost/lexical_cast.hpp>
#include <cassert>
#include <string>
#include <iostream>

using namespace std;

template <typename T>
T compare_any(const any& a, const any& b) {
    assert(a.type() == b.type());

    if (a.type() == typeid(int)) {
        return any_cast<int>(a) > any_cast<int>(b) ? any_cast<int>(a) : any_cast<int>(b);
    } else if (a.type() == typeid(float)) {
        return any_cast<float>(a) > any_cast<float>(b) ? any_cast<float>(a) : any_cast<float>(b);
    } else if (a.type() == typeid(std::string)) {
        float valA = boost::lexical_cast<float>(any_cast<std::string>(a).replace(any_cast<std::string>(a).find(','), 1, "."));
        float valB = boost::lexical_cast<float>(any_cast<std::string>(b).replace(any_cast<std::string>(b).find(','), 1, "."));
        return valA > valB ? any_cast<std::string>(a) : any_cast<std::string>(b);
    } else {
        return T();
    }
}

int main() {
    any a = 10;
    any b = 20;
    
    std::cout << any_cast<int>(compare_any<int>(a, b)) << std::endl;

    return 0;
}