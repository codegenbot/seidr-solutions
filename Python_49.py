```
def is_prime(num: int) -> bool:
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True

while True:
    try:
        num = int(input("Enter a number (or -1 to quit): "))
        if num == -1:
            break
        if not isinstance(num, int):
            print("Please enter an integer.")
        elif num < 2:
            print("Prime numbers are greater than or equal to 2.")
        else:
            print(is_prime(num))
    except ValueError:
        print("Invalid input. Please enter a valid integer.")