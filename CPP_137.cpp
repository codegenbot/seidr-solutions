#include <string>
#include <algorithm>
#include <boost/any.hpp>

using namespace std;

template <typename T1, typename T2>
boost::any compare_one(T1 a, T2 b) {
    string str_a = a;
    string str_b = b;
    replace(str_a.begin(), str_a.end(), ',', '.');
    replace(str_b.begin(), str_b.end(), ',', '.');
    float num1 = stof(str_a);
    float num2 = stof(str_b);
    return (num1 > num2) ? boost::any(str_a) : boost::any(str_b);
}