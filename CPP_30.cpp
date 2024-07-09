#include <vector>

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

bool issame(float a, float b) {
    return a == b;
}

int main() {
    return 0;
}