def luhn(digits):
    digits = list(map(int, digits))
    result = 0
    for i in range(16):
        if i % 2 == 0:
            result += digits[i]
        else:
            doubled = digits[i] * 2
            if doubled > 9:
                doubled -= 9
            result += doubled
    return result