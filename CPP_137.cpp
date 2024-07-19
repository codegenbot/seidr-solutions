#include <any>
#include <string>
#include <algorithm>

template <typename T>
T compare_one(T a, T b){
    if(std::any_cast<T>(a) > std::any_cast<T>(b)){
        return a;
    } else if(std::any_cast<T>(a) < std::any_cast<T>(b)){
        return b;
    } else {
        return "None";
    }
}

int main() {
    assert(std::any_cast<std::string>(compare_one(std::string("1"), std::string("2"))) == "None");
    return 0;
}