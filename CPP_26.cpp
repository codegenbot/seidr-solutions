#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> remove_duplicates(vector<int> numbers){
    vector<int> unique_numbers;
    for(int num : numbers){
        if(find(unique_numbers.begin(), unique_numbers.end(), num) == unique_numbers.end()){
            unique_numbers.push_back(num);
        }
    }
    sort(unique_numbers.begin(), unique_numbers.end());
    return unique_numbers;
}