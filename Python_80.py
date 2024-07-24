```
def is_happy_number(n):
    seen = set()
    while n != 1 and n not in seen:
        if str(n) in seen:
            return False
        seen.add(str(n))
        n = sum(int(digit) ** 2 for digit in str(n))
    return True

if __name__ == "__main__":
    while True:
        try:
            print(is_happy_number(int(input("Enter a number: "))))
            break
        except ValueError as e:
            print(f"Invalid input. {e}")