```
def is_prime(n):
    if n <= 1:
        return False
    if n == 2:
        return True
    if n % 2 == 0:
        return False
    max_divisor = int(n**0.5) + 1
    for d in range(3, max_divisor, 2):
        if n % d == 0:
            return False
    return True

def main():
    while True:
        prompt = input(
            "Enter a series of integers to check if they're prime, or '0' to quit."
        )
        if prompt == "0":
            break
        try:
            num = int(prompt)
            print(is_prime(num))
        except ValueError:
            print("Invalid input. Please enter a valid integer.")