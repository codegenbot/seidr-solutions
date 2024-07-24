def is_happy_number(n):
    seen = set()
    while True:
        if str(n) in seen:
            return False
        seen.add(str(n))
        n = sum(int(digit) ** 2 for digit in str(n))
        if n == 1 or n in [4, 16, 20, 21, 22, 26]:
            return True

try:
    num = int(input("Enter a number: "))
    print(is_happy_number(num))
except ValueError as e:
    print(f"Invalid input. {e}")