vector<int> incr_list(const vector<int>& l) {
    vector<int> result = l;
    for(int i = 0; i < result.size(); i++){
        result[i]++;
    }
    return result;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    vector<int> input = {1, 2, 3};
    vector<int> incremented = incr_list(input);
    vector<int> same = {2, 3, 4};
    
    if (issame(incremented, same)) {
        cout << "Vectors are the same\n";
    } else {
        cout << "Vectors are different\n";
    }
    
    return 0;
}