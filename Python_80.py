```
def is_happy_number(n):
    seen = set()
    while n != 1 and n not in seen:
        if str(n) in seen:
            return False
        seen.add(str(n))
        n = sum(int(digit) ** 2 for digit in str(n))
    return True

while True:
    try:
        num = int(input("Enter a number: "))
        print(is_happy_number(num))
        break
    except ValueError as e:
        print(f"Invalid input. {e}")