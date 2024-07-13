def sum_of_digits():
    n = int(input("Enter an integer: "))
    total = 0
    while n:
        total += n % 10
        n //= 10
    return total

result = sum_of_digits()
print(result)