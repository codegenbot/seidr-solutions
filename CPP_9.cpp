bool issame(const vector<int>& a, const vector<int>& b){
    return a == b;
}

vector<int> rolling_max(vector<int> numbers);
bool issame(const vector<int>& a, const vector<int>& b); // Function declaration

int main(){
    assert (issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    return 0;
}