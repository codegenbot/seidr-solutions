[PYTHON]
def largest_prime(lst):
    max = 0
    for i in lst:
        if is_prime(i) and i > max:
            max = i
    return sum_digits(max)

def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    return True

def sum_digits(n):
    total = 0
    while n > 0:
        total += n % 10
        n //= 10
    return total
[/PYTHON]
[TESTS]
# Test case 1:
assert largest_prime([2, 3, 5, 7, 11]) == 18
# Test case 2:
assert largest_prime([1, 2, 3, 4, 5, 6, 7, 8, 9, 10]) == 25
# Test case 3:
assert largest_prime([11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97]) == 20
[/TESTS]
