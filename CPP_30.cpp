#include <vector>

bool issame(vector<float> a,vector<float>b){
    // Your logic here
}

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(float i : l) {
        if(i > 0)
            result.push_back(i);
    }
    return result;
}

int main() {
    vector<float> result = get_positive({1, -2, 3});
    for (float i : result) {
        cout << i << " ";
    }
    return 0;
}