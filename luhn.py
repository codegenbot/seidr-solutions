def luhn(num):
    result = 0
    for i in range(len(num)-1, -1, -2):
        digit = num[i]
        if digit >= 5:
            result += (digit*2)-9
        else:
            result += digit*2
    return result%10