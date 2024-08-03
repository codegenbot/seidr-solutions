#include <vector>

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<int> f(int n){
    vector<int> result(n);
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            int fact = 1;
            for(int j = 1; j <= i; j++){
                fact *= j;
            }
            result[i] = fact;
        } else {
            int sum = 0;
            for(int j = 1; j <= i; j++){
                sum += j;
            }
            result[i] = sum;
        }
    }
    return result;
}

int main() {
    vector<int> expected = {1, 1, 2, 6, 3};
    vector<int> computed = f(5);
    
    if(issame(expected, computed)){
        cout << "Test passed" << endl;
    } else {
        cout << "Test failed" << endl;
    }
    
    return 0;
}