#include <algorithm>
#include <vector>

bool issame(vector<float> a, vector<float> b){
    return a == b;
}

std::vector<float> get_positive(std::vector<float> l){
    l.erase(std::remove_if(l.begin(), l.end(), [](float num){ return num <= 0; }), l.end());
    return l;
}

int main() {
    assert(issame(get_positive({}), {}));
}