#include <string>
#include <algorithm>
#include <boost/any.hpp>

using namespace std;

template <typename T1, typename T2>
string compare_one(T1 a, T2 b) {
    string str_a = to_string(a);  // Convert the first argument to string
    string str_b = to_string(b);  // Convert the second argument to string
    replace(str_a.begin(), str_a.end(), ',', '.');
    replace(str_b.begin(), str_b.end(), ',', '.');
    float num1 = stof(str_a);
    float num2 = stof(str_b);
    return (num1 > num2) ? str_a : str_b;
}