#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

template <typename T>
T compare_one(T a, T b) {
    return (a > b) ? a : b;
}

string compare_one(string a, string b) {
    replace(a.begin(), a.end(), ',', '.');
    replace(b.begin(), b.end(), ',', '.');
    float num1 = stof(a);
    float num2 = stof(b);
    return (num1 > num2) ? a : b;
}