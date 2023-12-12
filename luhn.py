def luhn_algorithm(numbers):
    new_digits = []
    for i in range(len(numbers)):
        if i % 2 == 1:
            digit = numbers[i] * 2
            if digit > 9:
                digit -= 9
            new_digits.append(digit)
        else:
            new_digits.append(numbers[i])
    return sum(new_digits)

n = int(input())
numbers = list(map(int, input().split()))

result = luhn_algorithm(numbers)
print(result)