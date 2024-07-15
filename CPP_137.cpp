#include <iostream>
#include <string>
#include <boost/any.hpp>
#include <cassert>

using namespace std;

template <typename T>
boost::any compare_one(T a, T b) {
    if (a > b) return a;
    else if (b > a) return b;
    else return "None";
}

int main() {
    assert (boost::any_cast<string>(compare_one(string("1"), string("1"))) == "None");
    assert (boost::any_cast<int>(compare_one(2, 1)) == 2);
    assert (boost::any_cast<float>(compare_one(3.6f, 4.8f)) == 4.8f);

    return 0;
}