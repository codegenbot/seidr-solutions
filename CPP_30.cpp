#include <vector>

bool issame(vector<float> a, vector<float> b);

vector<float> get_positive(vector<float> l) {
    vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

bool issame(vector<float> a, vector<float> b){
    // Implement your comparison logic here
}

int main() {
    assert(issame(get_positive({}), {}));
    return 0;
}