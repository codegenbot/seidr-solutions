#include <vector>

bool issame(vector<float> a, vector<float> b);

vector<float> derivative(vector<float> xs){
    vector<float> result;
    for(int i = 1; i < xs.size(); i++){
        result.push_back(xs[i] * i);
    }
    return result;
}

bool issame(vector<float> a, vector<float> b){
    return a == b;
}

int main() {
    vector<float> a = {1.1, 2.2, 3.3};
    vector<float> b = {1.1, 2.2, 3.3};
    
    if (issame(a, b)){
        cout << "Vectors a and b are the same." << endl;
    } else {
        cout << "Vectors a and b are different." << endl;
    }
    
    vector<float> result = derivative(a);
    for (float val : result){
        cout << val << " ";
    }
    
    return 0;
}