def luhn(vector):
    total = 0
    for i in range(len(vector)):
        digit = int(vector[i])
        if i % 2 == 1:
            digit *= 2
            if digit > 9:
                digit -= 9
        total += digit
    return str(total)