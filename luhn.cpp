```cpp
int luhn(vector<int> numbers) {
    int sum = 0;
    bool doubleNext = false;

    for (int i : numbers) {
        sum += i;
        if (doubleNext) {
            i *= 2;
            if (i > 9) {
                i -= 9;
            }
        }
        doubleNext = !doubleNext;
    }

    return sum;

}