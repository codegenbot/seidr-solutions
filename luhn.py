def luhn(numbers):
    result = 0
    for i in range(1, len(numbers), 2):
        temp = numbers[i] * 2
        if temp > 9:
            temp -= 9
        result += temp
    return result