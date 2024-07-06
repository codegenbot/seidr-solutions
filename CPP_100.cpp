```
vector<int> make_a_pile(int n) {
    vector<int> pile;
    int remaining_stones = n;
    
    while (remaining_stones > 0) {
        if (n % 2 == 1) {
            pile.push_back(2*remaining_stones + 1);
        } else {
            pile.push_back(2*remaining_stones);
        }
        n /= 2;
        remaining_stones = n; 
    }
    
    return pile;
}