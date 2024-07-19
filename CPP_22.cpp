#include <vector>
#include <list>
#include <any>

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> filter_integers(list<any> values);

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for(auto val : values) {
        if(auto ptr = any_cast<int>(&val)) {
            result.push_back(*ptr);
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}