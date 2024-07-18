#include <vector>

bool issame(float a, float b){
    return a == b;
}

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

int main(){
    vector<float> v = {1.5, -2.3, 4.0, -5.2};
    assert(issame(3.0, 3.0));
    assert(get_positive(v).size() == 2);
    return 0;
}