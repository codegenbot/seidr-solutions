
[PYTHON]
def count_up_to(n):
    return [i for i in range(2, n+1) if all(i % j != 0 for j in range(2, int(i**0.5) + 1))]
[/PYTHON]
[TESTS]
# Test case 1:
assert count_up_to(10) == [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97]
# Test case 2:
assert count_up_to(100) == [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97]
[/TESTS]
