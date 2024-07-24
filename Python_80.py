def is_happy_number(n):
    if n < 1:
        return False
    while n != 1 and n != 4:
        sum_of_digits = sum(int(digit) ** 2 for digit in str(n))
        n = sum_of_digits
    return n == 1 or n == 4

n = int(input("Enter a number: "))
print(is_happy_number(n))