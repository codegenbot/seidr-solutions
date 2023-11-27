#include <vector>
#include <cassert>
#include <type_traits>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

template<typename T>
bool is_integer(const T& value){
    return is_same<T, int>::value || is_same<T, char>::value;
}

vector<int> filter_integers(const vector<int>& values){
    vector<int> result;
    for(const auto& value : values){
        if(is_integer(value)){
            result.push_back(value);
        }
    }
    return result;
}