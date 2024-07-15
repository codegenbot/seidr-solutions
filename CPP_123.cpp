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

vector<int> get_odd_collatz(int n);

int main() {
    vector<int> result = get_odd_collatz(20);
    vector<int> expected = {1, 3, 5, 9};
    
    if(issame(result, expected)){
        cout << "Test Passed" << endl;
    } else {
        cout << "Test Failed" << endl;
    }
    return 0;
}