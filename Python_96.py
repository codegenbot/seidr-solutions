def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True


def count_up_to(n):
    return sum(range(1, n + 1))


# Test case:
print(is_prime(37))  # Should be True
print(count_up_to(5))  # Should be 15