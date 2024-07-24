#include <boost/any.hpp>
#include <algorithm>
#include <string>
#include <cassert>
#include <cmath>

using namespace std;

template <typename T, typename U>
auto compare_one(const T& a, const U& b) {
    if(a == b) return static_cast<T>(-1);
    if(typeid(T) == typeid(int) && typeid(U) == typeid(float)) return max(a, static_cast<T>(b));
    if(typeid(T) == typeid(float) && typeid(U) == typeid(int)) return max(static_cast<T>(a), b);
    if(typeid(T) == typeid(string) && typeid(U) == typeid(int)) return max(stof(a), static_cast<float>(b));
    if(typeid(T) == typeid(int) && typeid(U) == typeid(string)) return max(static_cast<T>(a), stof(b));
    if(typeid(T) == typeid(string) && typeid(U) == typeid(float)) return max(stof(a), static_cast<float>(b));
    if(typeid(T) == typeid(float) && typeid(U) == typeid(string)) return max(static_cast<T>(a), stof(b));
    return static_cast<T>(-1);
}