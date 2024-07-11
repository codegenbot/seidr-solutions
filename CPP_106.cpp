\#include \<vector\>

bool issame(vector<int> a, vector<int> b);

vector<int> f(int n);
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

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    // Test the issame function
    vector<int> test1 = {1, 2, 3};
    vector<int> test2 = {1, 2, 3};
    if (issame(test1, test2)) {
        cout << "Test arrays are the same." << endl;
    } else {
        cout << "Test arrays are different." << endl;
    }
    
    return 0;
}