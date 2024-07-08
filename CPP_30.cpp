#include <vector>

vector<float> get_positive(vector<float> l);

bool issame(vector<float> a, vector<float> b){
    // implementation of issame function
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

int main() {
    // main function code
}

assert(get_positive({}) == vector<float>{});