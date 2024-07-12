// Fix the vector declaration in the issame() function to use std::vector<int>
bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

// Rename the existing main() function to solve() and call it from the new main() function
void solve(){
    assert(issame(f(3), std::vector<int>{1, 2, 6}));
}

int main(){
    solve();
    return 0;
}