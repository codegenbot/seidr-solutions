#include <vector>
#include <algorithm>

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

vector<float> sort_even(vector<float> l){
    vector<float> result(l.size());
    for(int i = 0; i < l.size(); i++){
        if(i % 2 == 0){
            vector<float> temp;
            for(auto j: l | std::views::slices(0, l.size(), 2)){
                temp.push_back(j);
            }
            sort(temp.begin(), temp.end());
            result[i] = temp[0];
            for(int k = 1; k < temp.size(); k++){
                if(i + k * 2 < l.size()){
                    result[i+k*2] = temp[k];
                }
            }
        }else{
            result[i] = l[i];
        }
    }
    return result;
}

int main() {
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), { -12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    return 0;
}