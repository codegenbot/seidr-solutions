Here is the completed code:

vector<int> make_a_pile(int n){
    vector<int> pile;
    int count = 1;
    while(n > 0){
        if(n % 2 == 1) pile.push_back(count);
        else pile.push_back(count++);
        n /= 2;
        count += (n % 2 != 0);
    }
    return pile;
}