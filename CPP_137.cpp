#include <any>
#include <string>
#include <algorithm>

template <typename T>
T compare_one(T a, T b){
    if(typeid(a) == typeid(int)){
        if(std::any_cast<int>(a) > std::any_cast<int>(b)){
            return a;
        } else if(std::any_cast<int>(a) < std::any_cast<int>(b)){
            return b;
        } else {
            return T();
        }
    } else if(typeid(a) == typeid(float)){
        if(std::any_cast<float>(a) > std::any_cast<float>(b)){
            return a;
        } else if(std::any_cast<float>(a) < std::any_cast<float>(b)){
            return b;
        } else {
            return T();
        }
    } else if(typeid(a) == typeid(std::string)){
        std::string strA = std::any_cast<std::string>(a);
        std::string strB = std::any_cast<std::string>(b);
        std::replace(strA.begin(), strA.end(), ',', '.');
        std::replace(strB.begin(), strB.end(), ',', '.');
        if(std::stof(strA) > std::stof(strB)){
            return a;
        } else if(std::stof(strA) < std::stof(strB)){
            return b;
        } else {
            return T();
        }
    } else {
        return T();
    }
}

int main() {
    assert(std::any_cast<std::string>(compare_one(std::string("1"), 1)) == "None");
    return 0;
}