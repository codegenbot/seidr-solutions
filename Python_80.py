def is_happy(n):
    seen = set()
    while n != 1:
        if '0' in str(n):  
            return False
        if str(n) in seen:
            return False
        seen.add(str(n))
        n = 0
        for digit in str(n):
            n += int(digit) ** 2
    return True

num = int(input("Enter a number: "))
print(is_happy(num))