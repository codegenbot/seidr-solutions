Here's the modified code:

```
def count_up_to(n):
    """
    Returns a list of all prime numbers up to n.
    """
    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num**0.5) + 1):
            if num % i == 0:
                return False
        return True

    result = []
    for i in range(2, n):
        if is_prime(i):
            result.append(i)
    return result