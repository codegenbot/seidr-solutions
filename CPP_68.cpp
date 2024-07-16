#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> pluck(vector<int> arr);

int main() {
    // Code for testing the pluck function
    return 0;
}

vector<int> pluck(vector<int> arr){
    vector<int> result;
    int smallestEven = INT_MAX;
    int smallestEvenIndex = -1;
    
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0 && arr[i] < smallestEven) {
            smallestEven = arr[i];
            smallestEvenIndex = i;
        }
    }
    
    if (smallestEvenIndex != -1) {
        result.push_back(smallestEven);
        result.push_back(smallestEvenIndex);
    }
    
    return result;
}