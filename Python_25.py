```Python
def sum_of_digits():
    (n) = map(int, input().split())
    total = 0
    while n:
        total += n % 10
        n //= 10
    return total