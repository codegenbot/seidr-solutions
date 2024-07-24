```
def search(lst):
    max_prime = -1
    for num in lst:
        if isinstance(num, int) and is_prime(num) and num > max_prime:
            max_prime = num
    return max_prime


def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True


nums = list(map(int, input("Enter a series of space-separated numbers: ").split()))
if not all(isinstance(num, int) for num in nums):
    print("Invalid input! Please enter only integers.")
else:
    print(search(nums))