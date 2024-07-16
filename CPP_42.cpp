vector<int> incr_list(const vector<int>& l){
    vector<int> result = l;
    for(int i = 0; i < result.size(); i++){
        result[i]++;
    }
    return result;
}

bool issame(const vector<int>& a, const vector<int>& b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main(){
    vector<int> input = {1, 2, 3, 4};
    vector<int> incremented = incr_list(input);
    vector<int> expected = {2, 3, 4, 5};

    if(issame(incremented, expected)){
        cout << "Vectors are the same" << endl;
    } else {
        cout << "Vectors are different" << endl;
    }

    return 0;
}