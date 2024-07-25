def count_even_digits(n):
    total = 0
    for digit in str(n):
        if int(digit) % 2 == 0:
            total += 1
    return total

def check():
    n = int(input("Enter a number: "))
    print(count_even_digits(n))

check()