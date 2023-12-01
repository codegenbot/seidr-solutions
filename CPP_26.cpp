#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b);

vector<int> remove_duplicates(vector<int> numbers);

bool issame(vector<int> a, vector<int> b){
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
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
    return 0;
}