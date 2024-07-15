#include <vector>

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(float num : l){
        if(num > 0){
            result.push_back(num);
        }
    }
    return result;
}

bool is_same(vector<float> a, vector<float> b){
    return a == b;
}

int main() {
    vector<float> input1 = {1.1, 2.2, 3.3};
    vector<float> input2 = {1.1, 4.4, 5.5};
    
    bool result = is_same(input1, input2);

    return 0;
}