```
def next_digit_sum(n):
    total = 0
    while n:
        digit = n % 10
        total += digit ** 2
        n //= 10
    return total

def is_happy(n):
    seen = set()
    while n != 1 and n not in seen:
        if '0' in str(n):  
            return False
        seen.add(str(n))
        n = next_digit_sum(n)
    return True

num = int(input("Enter a number: "))
print(is_happy(num))