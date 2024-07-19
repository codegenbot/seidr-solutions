#include <vector>

vector<float> get_positive(vector<float> l);

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
    // Test your get_positive function here
    return 0;
}