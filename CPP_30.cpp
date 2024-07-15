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

int main(){
    vector<float> v1 = {1.5, -2.0, 3.7, -4.2};
    vector<float> v2 = {1.5, 3.7};
    
    vector<float> positive_v1 = get_positive(v1);
    vector<float> positive_v2 = get_positive(v2);
    
    bool same = is_same(positive_v1, positive_v2);
    
    return 0;
}