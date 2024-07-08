#include <vector>

vector<float> get_positive(vector<float> l);

bool issame(vector<float> a, vector<float> b){
    vector<float> a_positives = get_positive(a);
    vector<float> b_positives = get_positive(b);
    
    // Your implementation here
    
    return true; // Placeholder return statement
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