#include <vector>

vector<int> incr_list(vector<int> l);

bool issame(vector<int> a, vector<int> b){
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

vector<int> incr_list(vector<int> l){
    vector<int> result;
    for(int i=0; i<l.size(); i++){
        result.push_back(l[i]+1);
    }
    return result;
}

int main() {
    vector<int> input = {1, 2, 3, 4, 5};
    vector<int> output = incr_list(input);
    for(int i=0; i<output.size(); i++){
        cout << output[i] << " ";
    }
    return 0;
}