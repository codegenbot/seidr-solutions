[PYTHON]
def largest_prime_factor(n, max_value):
    for i in range(2, int(max_value**0.5) + 1):
        if n % i == 0 and is_prime(i):
            return i
    return n

def is_prime(n):
    if n <= 1 or n % 2 == 0:
        return False
    for i in range(3, int(n**0.5) + 1, 2):
        if n % i == 0:
            return False
    return True
[/PYTHON]
[TESTS]
# Test case 1:
assert largest_prime_factor(13195, 200) == 29
# Test case 2:
assert largest_prime_factor(100, 200) == 5
# Test case 3:
assert largest_prime_factor(100000000000000000000000000000000000000000000000, 200) == 100000000000000000000000000000000000000000000000
[/TESTS]
