int luhn(vector<int> card) {
    int sum = 0;
    for(int i = card.size() - 1; i >= 0; --i){
        if(i % 2 == 1)
            card[i] *= 2;
        if(card[i] > 9)
            card[i] -= 9;
        sum += card[i];
    }
    return sum;
}