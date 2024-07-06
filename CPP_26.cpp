bool issame(vector<int> a,vector<int>b){
    return a==b;
}

vector<int> remove_duplicates(vector<int> numbers){
    vector<int> result;
    for(int i = 0; i < numbers.size(); i++){
        bool duplicate = false;
        for(int j = 0; j < result.size(); j++){
            if(result[j] == numbers[i]){
                duplicate = true;
                break;
            }
        }
        if(!duplicate){
            result.push_back(numbers[i]);
        }
    }
    return result;
}

int main(){
    assert (issame({1, 4, 5}, remove_duplicates({1, 2, 3, 2, 4, 3, 5})));
    // rest of your code
}