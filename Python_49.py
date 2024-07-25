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
        num = int(input("Enter a number: "))
        if not isinstance(num, int):
            print("Please enter an integer.")
            continue
        if num < 2:
            print("Please enter a number greater than or equal to 2.")
            continue
        print(is_prime(num))
        break
    except ValueError:
        print("Invalid input. Please enter a valid integer.")