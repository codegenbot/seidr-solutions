#include <vector>

bool issame(vector<int> a, vector<int> b);

vector<int> pluck(vector<int> arr) {
    vector<int> result;
    int smallestValue = -1;
    int smallestIndex = -1;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            if (smallestValue == -1 || arr[i] < smallestValue) {
                smallestValue = arr[i];
                smallestIndex = i;
            }
        }
    }
    
    if (smallestIndex != -1) {
        result.push_back(smallestValue);
        result.push_back(smallestIndex);
    }
    
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    // your implementation of issame function
    // ...
}

int main() {
    if (issame(pluck({7, 9, 7, 1}), {})) {
        // your assert code
        // ...
    }
    
    return 0;
}