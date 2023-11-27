#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> pluck(vector<int> arr) {
    vector<int> result;
    int smallestEven = -1;
    int smallestEvenIndex = -1;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && (smallestEven == -1 || arr[i] < smallestEven)) {
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

int main() {
    vector<int> input = {1, 2, 3, 4, 5, 6};
    vector<int> output = pluck(input);
    
    for (int i = 0; i < output.size(); i++) {
        cout << output[i] << " ";
    }
    
    return 0;
}