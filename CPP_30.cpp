#include <vector>

using namespace std;

bool issame(vector<float> a, vector<float> b){
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<float> get_positive(vector<float> l){
    vector<float> positive_numbers;
    for(float num : l){
        if(num > 0){
            positive_numbers.push_back(num);
        }
    }
    return positive_numbers;
}

int main(){
    assert (issame(get_positive({}), {}));

    // Additional code logic

    return 0;
}