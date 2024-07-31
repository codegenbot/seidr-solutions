Here is the solution:

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int count = 1;
    while (n > 0) {
        if (n % 2 == 1)
            pile.push_back(count);
        else
            pile.push_back(count + 1);
        count += 2;
        n--;
    }
    return pile;
}