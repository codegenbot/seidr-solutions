```
def is_prime(num: int) -> bool:
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True

num = None
while num is None:
    try:
        num = int(input("Enter a number: "))
    except ValueError:
        print("Invalid input. Please enter a valid integer.")
print(is_prime(num))