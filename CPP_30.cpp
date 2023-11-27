#include <iostream>
#include <vector>

using namespace std;

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(int i = 0; i < l.size(); i++){
        if(l[i] > 0){
            result.push_back(l[i]);
        }
    }
    return result;
}

bool issame(vector<float> a, vector<float> b){
    if(a == b){
        return true;
    }
    return false;
}

int main() {
    cout << issame(get_positive({}), vector<float>()) << endl;
    return 0;
}