```
def check():
    n = int(input("Enter a number: "))
    print(count_even_digits(n))
    
def count_even_digits(n):
    return sum(1 for digit in str(n) if int(digit) % 2 == 0)
check()