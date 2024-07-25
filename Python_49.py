```
def is_prime(num: int) -> bool:
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True

modp = int(input("Enter a number to check if it's prime: "))
print(is_prime(modp))