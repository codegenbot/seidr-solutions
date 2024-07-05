bool issame(vector<int> a, vector<int>b){
    return a == b;
}

int main() {
    assert(issame({2,1,5}, sort_third({5, 6, 3, 4, 8, 9, 2, 1})));
    // Your code here
}