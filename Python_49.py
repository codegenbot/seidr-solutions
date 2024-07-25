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
    except ValueError as e:
        print("Invalid input. Please enter a valid integer.")
    except Exception as e:
        print(f"An error occurred: {e}")
if num < 2:
    print("Please enter a number greater than or equal to 2.")
elif not isinstance(num, int):
    print("Please enter an integer.")
else:
    print(is_prime(num))