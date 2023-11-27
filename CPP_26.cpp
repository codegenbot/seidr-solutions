#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b){
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
  
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

vector<int> remove_duplicates(vector<int> numbers){
    vector<int> result;
    for(int i=0; i<numbers.size(); i++){
        if(count(numbers.begin(), numbers.end(), numbers[i]) == 1){
            result.push_back(numbers[i]);
        }
    }
    return result;
}

int main(){
    vector<int> numbers = {1, 2, 2, 3, 4, 5, 5, 6};
    vector<int> unique_numbers = remove_duplicates(numbers);
    vector<int> expected_result = {1, 3, 4, 6};
  
    if(issame(unique_numbers, expected_result)){
        cout << "Test case passed!" << endl;
    }
    else{
        cout << "Test case failed!" << endl;
    }
  
    return 0;
}