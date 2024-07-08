#include <vector>

vector<float> get_positive(vector<float> l);

bool issame(vector<float> a, vector<float> b){
    vector<float> positive_a = get_positive(a);
    vector<float> positive_b = get_positive(b);

    return positive_a == positive_b;
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