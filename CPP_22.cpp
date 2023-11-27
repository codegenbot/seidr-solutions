#include <vector>
#include <list>

using namespace std;

vector<int> filter_integers(list<int> values){
    vector<int> result;
    for(auto value : values){
        result.push_back(value);
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main() {
    issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3});
    return 0;
}