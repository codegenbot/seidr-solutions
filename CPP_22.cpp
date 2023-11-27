#include <vector>
#include <cassert>
#include <type_traits>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

template<typename T>
bool is_integer(const T& value){
    return std::is_same<T, int>::value || std::is_same<T, char>::value;
}

std::vector<int> filter_integers(const std::vector<int>& values){
    std::vector<int> result;
    for(const auto& value : values){
        if(is_integer(value)){
            result.push_back(value);
        }
    }
    return result;
}

int main(){
    std::vector<int> filtered = filter_integers({3, 'c', 3, 3, 'a', 'b'});
    assert(issame(filtered, std::vector<int>({3, 3, 3})));

    // other code

    return 0;
}