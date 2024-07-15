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

bool is_same(vector<float> a, vector<float> b) {
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

int main(){
    vector<float> l = {1.0, -2.0, 3.0, -4.0};
    vector<float> positive_nums = get_positive(l);
    for(float num : positive_nums){
        cout << num << " ";
    }
    
    vector<float> a = {1.0, 2.0, 3.0};
    vector<float> b = {1.0, 2.0, 3.0};
    bool result = is_same(a, b);
    cout << endl << "Are vectors a and b the same? " << result << endl;
    
    return 0;
}