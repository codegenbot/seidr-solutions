#include <vector>

bool issame(vector<int> a, vector<int> b);

vector<int> get_odd_collatz(int n){
    vector<int> collatz_seq;
    collatz_seq.push_back(n);
    while(n != 1){
        if(n % 2 == 0){
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        collatz_seq.push_back(n);
    }
    vector<int> odd_collatz_seq;
    for(int i = 0; i < collatz_seq.size(); i++){
        if(collatz_seq[i] % 2 != 0){
            odd_collatz_seq.push_back(collatz_seq[i]);
        }
    }
    sort(odd_collatz_seq.begin(), odd_collatz_seq.end());
    return odd_collatz_seq;
}

bool issame(vector<int> a, vector<int> b) {
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

int main() {
    // Test cases
    vector<int> result = get_odd_collatz(5);
    vector<int> expected = {1, 5};
    if(issame(result, expected)) {
        cout << "Test case 1 passed" << endl;
    } else {
        cout << "Test case 1 failed" << endl;
    }

    result = get_odd_collatz(10);
    expected = {1, 5, 7, 9};
    if(issame(result, expected)) {
        cout << "Test case 2 passed" << endl;
    } else {
        cout << "Test case 2 failed" << endl;
    }

    result = get_odd_collatz(20);
    expected = {1, 5, 7, 9, 11, 13, 15, 17, 19};
    if(issame(result, expected)) {
        cout << "Test case 3 passed" << endl;
    } else {
        cout << "Test case 3 failed" << endl;
    }

    return 0;
}