```Python
def sum_of_squares(digits):
    return sum(int(digit) ** 2 for digit in str(digits))

def is_happy_number(n):
    if n < 1:
        return False

    seen = set()
    while n != 1 and n not in seen:
        seen.add(n)
        n = sum_of_squares(n)

    return n == 1

while True:
    try:
        n = int(input("Enter a number: "))
        if n < 10:
            print("Number should be 10 or greater. Please enter again.")
        else:
            break
    except ValueError:
        print("Invalid input. Please enter an integer.")

print(is_happy_number(n))