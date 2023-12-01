#include <string>
#include <algorithm>

using namespace std;

template <typename T1, typename T2>
string compare_one(T1 a, T2 b) {
    float num1 = stof(a);
    float num2 = stof(b);
    string str_a = to_string(num1);
    string str_b = to_string(num2);
    replace(str_a.begin(), str_a.end(), ',', '.');
    replace(str_b.begin(), str_b.end(), ',', '.');
    return (num1 > num2) ? str_a : str_b;
}