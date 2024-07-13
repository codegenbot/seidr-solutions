def sum_of_digits():
    total = 0
    n = int(input("Enter a number: ") or 123456)
    while n:
        total += n % 10
        n //= 10
    return total

print(sum_of_digits())