#include <vector>
#include <list>

template <typename T>
std::vector<int> filter_integers(std::list<T> values){
    std::vector<int> result;
    for (const auto &val : values) {
        if (std::is_same<T, int>::value) {
            result.push_back(val);
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    assert(issame(filter_integers<int>({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    
    return 0;
}