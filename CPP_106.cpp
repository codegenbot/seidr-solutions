#include <vector>

bool issame(vector<int> a, vector<int> b);

vector<int> f(int n){
    vector<int> result(n);
    for(int i=0; i<n; i++){
        if(i % 2 == 0){
            int fact = 1;
            for(int j=1; j<=i; j++){
                fact *= j;
            }
            result[i] = fact;
        } else {
            int sum = 0;
            for(int j=1; j<=i; j++){
                sum += j;
            }
            result[i] = sum;
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
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

int main() {
    // Main function code here
    return 0;
}