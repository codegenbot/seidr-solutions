```
def check(func):
    num = int(input("Enter a number: "))
    print(func(num))

def is_happy_number(n):
    seen = set()
    while n != 1 and n not in seen:
        if str(n) in seen:
            return False
        seen.add(str(n))
        n = sum(int(digit) ** 2 for digit in str(n))
    return True

check(is_happy_number)