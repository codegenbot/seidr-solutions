def luhn(digits):
    digits = list(map(int, digits))
    result = 0
    for i in range(1, len(digits) + 1):
        if i % 2 == 0:
            doubled = digits[i - 1] * 2
            if doubled > 9:
                doubled -= 9
        else:
            doubled = digits[i - 1]
        result += doubled
    return result