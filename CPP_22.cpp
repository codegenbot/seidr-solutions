#include <vector>
#include <cassert>
#include <type_traits>

using namespace std;

bool issame(const vector<int>& a, vector<int>& b){
    return a == b;
}

template<typename T>
bool is_integer(const T& value){
    return (is_same_v<T, int> || is_same_v<T, char>);
}

vector<int> filter_integers(const vector<int>& values){
    vector<int> result;
    for(const auto& value : values){
        if(is_integer<decltype(value)>(value)){
            result.push_back(value);
        }
    }
    return result;
}

vector<int> filtered = filter_integers({3, 'c', 3, 3, 'a', 'b'});
assert(issame(filtered, vector<int>{3, 3, 3}));