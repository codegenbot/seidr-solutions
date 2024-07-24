bool issame(vector<float> a,vector<float>b){
    if(a.size()!=b.size())return false;
    for(int i=0;i<a.size();i++){
        if(abs(a[i]-b[i])>1e-6)return false;
    }
    return true;
}

vector<float> sort_even(vector<float> l) {
    vector<float> result;
    vector<float> evenVals;
    for (float f : l) {
        if (abs(f) % 2 == 0) {
            evenVals.push_back(f);
        } else {
            result.push_back(f);
        }
    }
    sort(evenVals.begin(), evenVals.end());
    for(float f : evenVals)result.push_back(f);
    return result;
}

int main() {
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 4, 2, 12, 10, 5, 23}));
    return 0;
}