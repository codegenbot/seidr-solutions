```
def find_max_prime(lst):
    max_prime = -1
    for num in lst:
        if is_prime(num) and num > max_prime:
            max_prime = num
    return max_prime


def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

n = int(input("Enter the number of elements: "))
numbers = [int(x) for x in input(f"Enter {n} space-separated integers: ").split()]
print(find_max_prime(numbers))