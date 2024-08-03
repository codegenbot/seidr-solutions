// Add function declaration and definition
bool will_it_fly(vector<int> q, int w) {
    int sum = 0;
    for (int num : q) {
        sum += num;
    }
    
    if (sum <= w) {
        vector<int> reversed_q = q;
        reverse(reversed_q.begin(), reversed_q.end());
        
        if (q == reversed_q) {
            return true;
        }
    }
    
    return false;
}

// In main function, call the function correctly
int main() {
    assert(will_it_fly({5}, 5) == true);
}