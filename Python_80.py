```
def is_happy_number():
    while True:
        try:
            n = int(input("Enter a number: "))
            if n < 10:
                print("Number should be 10 or greater. Please enter again.")
            else:
                break
        except ValueError:
            print("Invalid input. Please enter an integer.")

    seen = set()
    while True:
        if n in seen:
            return False
        seen.add(n)
        n = sum(int(digit) ** 2 for digit in str(n))

    return True

print(is_happy_number())