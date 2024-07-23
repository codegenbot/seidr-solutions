def luhn(card_number):
    total = 0
    for i in range(0, len(str(card_number)), 2): 
        double_digit_sum = 0
        for j in range(2):
            double_digit_sum += int((str(card_number))[i+j]) * (2 if j==1 else 1)
        total += sum(map(int, str(double_digit_sum).split('')))
    return total % 10 == 0