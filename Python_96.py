
[PYTHON]
def count_up_to(n):
    prime_list = []
    for i in range(2, n+1):
        if is_prime(i):
            prime_list.append(i)
    return prime_list
[/PYTHON]
[TESTS]
# Test case 1:
assert count_up_to(10) == [2, 3, 5, 7]
# Test case 2:
assert count_up_to(20) == [2, 3, 5, 7, 11, 13, 17, 19]
[/TESTS]
