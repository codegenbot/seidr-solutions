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

int main(){
    // Read input
    int n;
    cin >> n;
    vector<int> input(n);
    for(int i=0; i<n; i++){
        cin >> input[i];
    }
    
    // Call the function and print the result
    vector<int> output = remove_duplicates(input);
    for(int i=0; i<output.size(); i++){
        cout << output[i] << " ";
    }
    cout << endl;
    
    return 0;
}