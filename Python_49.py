```
def is_prime(num: int) -> bool:
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True

print("Please enter a positive integer to check if it's prime.")
num = None
while num is None or (num and num < 2):
    try:
        num = int(input("Enter a number: "))
    except ValueError:
        print("Invalid input. Please enter a valid integer.")
if not isinstance(num, int):
    print("Please enter an integer.")
else:
    print(is_prime(num))