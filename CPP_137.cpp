#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

template <typename T1, typename T2>
string compare_one(T1 a, T2 b) {
    string str_a = to_string(a);
    string str_b = to_string(b);
    replace(str_a.begin(), str_a.end(), ',', '.');
    replace(str_b.begin(), str_b.end(), ',', '.');
    return (str_a > str_b) ? str_a : str_b;
}