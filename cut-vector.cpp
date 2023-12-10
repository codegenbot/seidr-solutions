[PYTHON]
def cut_vector(v):
    n = len(v)
    left = []
    right = []
    for i in range(n):
        if v[i] % 2 == 0:
            left.append(v[i])
        else:
            right.append(v[i])
    return left + right
[/PYTHON]
[TESTS]
# Test case 1:
assert cut_vector([1, 0]) == [1, 0]
# Test case 2:
assert cut_vector([1, 10]) == [1, 10]
# Test case 3:
assert cut_vector([1, 100]) == [1, 100]
# Test case 4:
assert cut_vector([1, 1000]) == [1, 1000]
# Test case 5:
assert cut_vector([1, 10000]) == [1, 10000]
[/TESTS]
