vector<int> make_a_pile(int n) {
    vector<int> pile;
    int stones = 1;
    while (n > 0) {
        if ((n % 2) == 1) { 
            pile.push_back(stones);
            --n; // decrement n because one stone is used
            if (n > 0) {
                ++stones; // increment stones for the next move
            }
        } else { 
            while (n > 0 && ((n-1) % 2) == 1) {
                pile.push_back(stones);
                --n;
                if (n > 0) {
                    ++stones;
                }
            }
            // If n is even, add the last stone
            if (n > 0) {
                pile.push_back(stones);
                --n;
            }
        }
    }
    return pile;
}