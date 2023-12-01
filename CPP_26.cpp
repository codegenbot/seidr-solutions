#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> a, vector<int> b);

vector<int> remove_duplicates(vector<int> numbers);

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

vector<int> remove_duplicates(vector<int> numbers){
    vector<int> result;
    for(int i=0; i<numbers.size(); i++){
        if(count(numbers.begin(), numbers.end(), numbers[i]) == 1){
            result.push_back(numbers[i]);
        }
    }
    return result;
}

int main() {
    // test code
    vector<int> numbers = {1, 2, 3, 4, 4, 5, 6, 7, 7, 8};
    vector<int> unique_numbers = remove_duplicates(numbers);
    
    for(int i=0; i<unique_numbers.size(); i++){
        cout << unique_numbers[i] << " ";
    }
    
    return 0;
}