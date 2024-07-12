#include <vector>

bool issame(vector<float> a, vector<float> b){
    return a == b;
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
    vector<float> vec1 = {1.2, -3.4, 5.6};
    vector<float> vec2 = {1.2, 5.6};

    if(issame(vec1, vec2)){
        // Code to execute when vectors are the same
    } else {
        // Code to execute when vectors are different
    }

    return 0;
}