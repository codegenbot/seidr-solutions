vector<int> remove_duplicates(vector<int> numbers);
bool issame(vector<int> a, vector<int> b);

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
    if(a.size() != b.size()) {
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

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for(int i=0; i<n; i++){
        cin >> numbers[i];
    }
    
    vector<int> unique_numbers = remove_duplicates(numbers);
    for(int i=0; i<unique_numbers.size(); i++){
        cout << unique_numbers[i] << " ";
    }
    cout << endl;
    
    vector<int> numbers_copy(numbers.begin(), numbers.end());
    sort(numbers_copy.begin(), numbers_copy.end());
    if(issame(numbers, numbers_copy)){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}