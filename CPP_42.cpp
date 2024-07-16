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
    vector<int> l = {1, 2, 3, 4, 5};
    vector<int> incremented_list = incr_list(l);
    
    if(issame(l, incremented_list)){
        cout << "The lists are the same." << endl;
    } else {
        cout << "The lists are different." << endl;
    }
    
    return 0;
}