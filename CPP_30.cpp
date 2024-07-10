#include <vector>

bool issame(vector<float> a, vector<float> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<float> get_positive(vector<float> l);

int main() {
    // Sample test case
    vector<float> l = {-1.5, 2.5, -3.0, 4.0, 0.5};
    vector<float> result = get_positive(l);

    // Print the positive numbers
    for(float num : result){
        cout << num << " ";
    }
    return 0;
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