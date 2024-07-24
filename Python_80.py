def is_happy_number(n):
    seen = set()
    while True:
        if str(n) in seen:
            return False
        seen.add(str(n))
        n = sum(int(digit) ** 2 for digit in str(n))
        if n == 1:
            return True

print(is_happy_number(int(input("Enter a number: "))))