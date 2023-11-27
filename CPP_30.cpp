#include <vector>
#include <cassert>

using namespace std;

vector<float> get_positive(const vector<float>& l){
    vector<float> positive_numbers;
    for(float num : l){
        if(num > 0){
            positive_numbers.push_back(num);
        }
    }
    return positive_numbers;
}

bool issame(const vector<float>& a, const vector<float>& b){
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

int main() {
    assert (issame(get_positive({}), {}));

    return 0;
}