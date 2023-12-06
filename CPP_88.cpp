[PYTHON]
def sort_vector(arr):
    if sum(arr[0], arr[-1]) % 2 == 0:
        return sorted(arr, reverse=True)
    else:
        return sorted(arr)
[/PYTHON]
[TESTS]
# Test case 1:
assert sort_vector([]) == []
# Test case 2:
assert sort_vector([5]) == [5]
# Test case 3:
assert sort_vector([2, 4, 3, 0, 1, 5]) == [0, 1, 2, 3, 4, 5]
# Test case 4:
assert sort_vector([2, 4, 3, 0, 1, 5, 6]) == [6, 5, 4, 3, 2, 1, 0]
[/TESTS]

```

```