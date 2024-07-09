vector<int> even_odd_count(int num) {
    vector<int> result;
    int n = abs(num);
    int count_even = 0, count_odd = 0;

    while(n > 0) {
        int digit = n % 10;
        if(digit % 2 == 0)
            count_even++;
        else
            count_odd++;

        n /= 10;
    }

    result.push_back(count_even);
    result.push_back(count_odd);

    return result;
}