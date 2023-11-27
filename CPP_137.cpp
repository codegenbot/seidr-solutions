#include <string>

template<typename T>
T compare_one(T a, T b){
    if (a > b){
        return a;
    }
    return b;
}