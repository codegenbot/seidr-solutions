def next_digit_sum(n):
    total = 0
    while n:
        digit = n % 10
        total += int(digit) ** 2  
        n //= 10
    return total

def is_happy(n):
    seen = set()
    while True:
        if '0' in str(n):  
            return False
        if n == 1: 
            return True
        if str(n) in seen:
            return False
        seen.add(str(n))
        n = next_digit_sum(n)

num = int(input("Enter a number: "))
print(is_happy(num))