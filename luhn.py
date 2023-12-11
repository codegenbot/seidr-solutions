def luhn(digits):
    digits = list(map(int, digits))
    result = 0
    for i in range(len(digits)):
        if i % 2 == 1:
            result += digits[i]
        else:
            doubled = digits[i] * 2
            if doubled > 9:
                result += doubled - 9
            else:
                result += doubled
    return result