#include <vector>
#include <cassert>

vector<float> get_positive(vector<float> l);

int main() {
    assert(get_positive({}).size() == 0);
}

vector<float> get_positive(vector<float> l){
    vector<float> positive_nums;
    for(int i = 0; i < l.size(); i++){
        if(l[i] > 0){
            positive_nums.push_back(l[i]);
        }
    }
    return positive_nums;
}