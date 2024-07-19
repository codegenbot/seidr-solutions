vector<int> even_odd_count(int num){
    vector<int> counts = {0, 0};
    while (num != 0) {
        if (num % 2 == 0) {
            counts[0]++;
        } else {
            counts[1]++;
        }
        num /= 10;
    }
    return counts;
}