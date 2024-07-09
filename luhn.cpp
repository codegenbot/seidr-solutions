```cpp
int luhn(const vector<int>& digits) {
    int sum = 0;
    bool doubleNext = true;
    
    for (int i = 0; i < digits.size(); i++) {
        if (doubleNext) {
            int doubled = (digits[i] * 2) % 10 + ((digits[i] * 2) / 10);
            sum += doubled;
            doubleNext = false;
        } else {
            sum += digits[i];
            doubleNext = !doubleNext;
        }
    }
    
    return sum;
}