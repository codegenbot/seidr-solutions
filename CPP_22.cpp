#include <vector>
#include <cassert>
#include <type_traits>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b){
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

int main(){
    vector<int> filtered = filter_integers({3, 'c', 3, 3, 'a', 'b'});
    assert(issame(filtered, {3, 3, 3}));

    // other code

    return 0;
}