```c++
int luhn(vector<int> numbers) {
    int sum = 0;
    bool doubleNext = false;
    
    for (int i : numbers) {
        if (i < numbers.size() - 1) {
            if (doubleNext) {
                i *= 2;
                if (i > 9) {
                    i -= 9;
                }
            }
        } else {
            sum += i; // add the last digit without doubling
        }
        doubleNext = !doubleNext;
    }
    
    return sum;

}