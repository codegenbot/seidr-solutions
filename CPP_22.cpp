#include <vector>
#include <list>
#include <typeinfo>

using namespace std;

vector<int> filter_integers(list<int> values){
    vector<int> result;
    for(auto value : values){
        if (std::is_same<decltype(value), int>::value){
            result.push_back(value);
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3});
    return 0;
}