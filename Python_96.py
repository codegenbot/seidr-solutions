[PYTHON]
def count_up_to(n):
    prime_numbers = []
    for i in range(2, int(n**0.5) + 1):
        if not i % 2:
            prime_numbers.append(i)
        for j in range(i*i, n+1, i):
            if not j % i:
                break
    return prime_numbers
[/PYTHON]
[TESTS]
# Test case 1:
assert count_up_to(10) == [2, 3, 5, 7]
# Test case 2:
assert count_up_to(20) == [2, 3, 5, 7, 11, 13, 17, 19]
# Test case 3:
assert count_up_to(30) == [2, 3, 5, 7, 11, 13, 17, 19, 23, 29]
[/TESTS]
