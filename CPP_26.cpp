vector<int> remove_duplicates(vector<int> numbers){
    vector<int> result;
    for(int i=0; i<numbers.size(); i++){
        if(count(numbers.begin(), numbers.end(), numbers[i]) == 1){
            result.push_back(numbers[i]);
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main(){
    vector<int> numbers = {1, 2, 3, 1, 2, 4, 5, 6, 7, 8, 5, 4, 9};
    vector<int> expected_result = {3, 6, 7, 8, 9};
    vector<int> result = remove_duplicates(numbers);
    if(issame(result, expected_result)){
        cout << "Test case passed" << endl;
    } else {
        cout << "Test case failed" << endl;
    }
    return 0;
}