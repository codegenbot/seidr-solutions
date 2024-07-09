bool issame(const vector<int>& v1, const vector<int>& v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    for (size_t i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
}

vector<int> count_up_to(int n);

int main() {
    vector<int> prime_expected = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 
                                  61, 67, 71, 73, 79, 83, 89, 97};    
    vector<int> prime_output = count_up_to(101);
    
    if (issame(prime_output, prime_expected)) {
        cout << "output is correct\n";
    } else {
        cout << "output is incorrect\n";
    }
    
    return 0;
}