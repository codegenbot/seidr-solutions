#include <list>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> filter_integers(std::list<int> values){
    std::vector<int> result;
    for (auto val : values) {
        if (typeid(val) == typeid(int)) {
            result.push_back(val);
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}