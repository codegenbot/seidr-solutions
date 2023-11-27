vector<float> get_positive(vector<float> l){
    vector<float> positive_nums;
    for(int i=0; i<l.size(); i++){
        if(l[i] > 0){
            positive_nums.push_back(l[i]);
        }
    }
    return positive_nums;
}

#include <vector>    // Added vector header

bool issame(vector<float> a, vector<float> b){    // Corrected function signature with missing comma
    if(a.size() != b.size()){
        return false;
    }

    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }

    return true;
}

vector<float> get_positive(vector<float> l);    // Declared get_positive function before using it in the main function

int main() {
    vector<float> nums = {1.5, -2.3, 4.2, -0.7, 3.1};
    vector<float> positive_nums = get_positive(nums);

    for(int i=0; i<positive_nums.size(); i++){
        cout << positive_nums[i] << " ";
    }

    return 0;
}