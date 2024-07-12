#include <vector>

bool issame(vector<float> a, vector<float> b);

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(float num : l){
        if(num > 0){
            result.push_back(num);
        }
    }
    return result;
}

bool issame(vector<float> a, vector<float> b){
    return a == b;
}

int main() {
    vector<float> vec1 = {1.1, 2.2, 3.3};
    vector<float> vec2 = {1.1, 2.2, 3.3};

    if(issame(vec1, vec2)){
        cout << "Vectors are the same" << endl;
    } else{
        cout << "Vectors are different" << endl;
    }

    return 0;
}