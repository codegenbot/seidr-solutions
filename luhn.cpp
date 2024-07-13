int luhn(const std::vector<int>& cardNumber) {
    int sum = 0;
    bool alternate = false; 
    for (int c : cardNumber) { 
        if (alternate) {
            int doubled = c * 2; 
            if (doubled > 9) {
                doubled -= 9; 
            }
            sum += doubled;
        } else {
            sum += c; 
        }
        alternate = !alternate; 
    }
    return (sum / 10) % 10;
}