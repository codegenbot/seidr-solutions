#include <vector>

bool issame(vector<float> a, vector<float> b);

vector<float> get_positive(vector<float> l);

bool issame(vector<float> a, vector<float> b){
    if(a.size() != b.size()) {
        return false;
    }

    for(size_t i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(float num : l){
        if(num > 0){
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    // Sample usage
    vector<float> numbers = {1.5, -2.5, 3.0, -4.2, 5.6};
    vector<float> positive_numbers = get_positive(numbers);

    return 0;
}