```cpp
std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    int stones = 1;
    while (stones <= n && stones <= 8) {
        if (stones > n)
            break;
        pile.push_back(stones);
        stones += 2; 
    }
    return pile;
}