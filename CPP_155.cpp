Here is the solution:

vector<int> even_odd_count(int num) {
    vector<int> result(2);
    int temp = abs(num);
    while (temp > 0) {
        int digit = temp % 10;
        if (digit % 2 == 0)
            result[0]++;
        else
            result[1]++;
        temp /= 10;
    }
    return result;
}