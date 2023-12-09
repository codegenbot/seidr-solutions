[PYTHON]
def count_up_to(n):
    numbers = range(2, n+1)
    for i in numbers:
        if any(j <= int(i**0.5) for j in range(2, i)):
            break
    return [i for i in numbers if i not in set(range(2, int(n**0.5)+1))]
[/PYTHON]
[TESTS]
# Test case 1:
assert count_up_to(10) == [2, 3, 5, 7]
# Test case 2:
assert count_up_to(101) == [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97]
[/TESTS]
