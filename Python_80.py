```
def is_happy(n):
    seen = set()
    while n != 1 and n not in seen:
        if str(n) in seen:
            return False
        seen.add(str(n))
        n = sum(int(digit) ** 2 for digit in str(n))
    return True

while True:
    num = int(input("Enter a number (0 to stop): "))
    if num == 0:
        break
    print(is_happy(num))