bool issame(vector<int> a, vector<int> b){
    for(int i = 0; i < a.size(); i++){
        a[i]++;
    }
    return a == b;
}

int main(){
    assert(issame(incr_elem({5, 2, 5, 2, 3, 3, 9, 0, 123}), {6, 3, 6, 3, 4, 4, 10, 1, 124}));
    return 0;
}