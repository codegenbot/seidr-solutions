def luhn(digits):
    doubled = []
    for i in range(1, len(digits) + 1):
        if i % 2 == 0:
            doubled.append(int(digits[i - 1]) * 2)
        else:
            doubled.append(int(digits[i - 1]))
    for i in range(len(doubled)):
        if doubled[i] > 9:
            doubled[i] = doubled[i] - 9
    return sum(doubled)