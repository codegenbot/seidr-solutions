#include <vector>
#include <list>
#include <any>

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for(auto val : values) {
        if(auto ptr = any_cast<int>(&val)) {
            result.push_back(*ptr);
        }
    }
    return result;
}

assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));