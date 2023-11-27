#include <vector>

bool issame(std::vector<float> a, std::vector<float> b);

std::vector<float> get_positive(std::vector<float> l){
    std::vector<float> result;
    for(int i = 0; i < l.size(); i++){
        if(l[i] > 0){
            result.push_back(l[i]);
        }
    }
    return result;
}

int main(){
    assert(issame(get_positive({}), {}));
}

bool issame(std::vector<float> a, std::vector<float> b){
    if (a.size() != b.size()){
        return false;
    }
    for (int i = 0; i < a.size(); i++){
        if (a[i] != b[i]){
            return false;
        }
    }
    return true;
}