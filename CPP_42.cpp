vector<int> incr_elem(vector<int> l){
    for(int i = 0; i < l.size(); i++){
        l[i]++;
    }
    return l;
}

int main(){
    assert(issame(incr_elem({5, 2, 5, 2, 3, 3, 9, 0, 123}), {6, 3, 6, 3, 4, 4, 10, 1, 124}));
    return 0;
}