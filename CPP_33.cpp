#include <vector>
#include <algorithm>

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

vector<int> sort_third(vector<int> l){
    vector<int> result = l;
    vector<int> sorted_values;

    for(int i = 0; i < l.size(); i++){
        if(i % 3 == 0){
            sorted_values.push_back(l[i]);
        }
    }

    sort(sorted_values.begin(), sorted_values.end());

    int sorted_index = 0;
    for(int i = 0; i < l.size(); i++){
        if(i % 3 == 0){
            result[i] = sorted_values[sorted_index];
            sorted_index++;
        }
    }

    return result;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
    return 0;
}