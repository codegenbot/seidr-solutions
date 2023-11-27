#include <vector>

bool issame(vector<int> a, vector<int> b);

vector<int> pluck(vector<int> arr);

int main() {
    vector<int> arr = {1, 3, 2, 5, 4};
    vector<int> result = pluck(arr);
    
    cout << "Smallest even number: " << result[0] << endl;
    cout << "Index of smallest even number: " << result[1] << endl;
    
    return 0;
}

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()) {
        return false;
    }
    
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

vector<int> pluck(vector<int> arr){
    vector<int> result;
    int smallestEven = -1;
    int smallestEvenIndex = -1;
    
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] % 2 == 0 && (smallestEven == -1 || arr[i] < smallestEven)){
            smallestEven = arr[i];
            smallestEvenIndex = i;
        }
    }
    
    if(smallestEvenIndex != -1){
        result.push_back(smallestEven);
        result.push_back(smallestEvenIndex);
    }
    
    return result;
}