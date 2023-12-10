[PYTHON]
def get_indices(text, target):
    indices = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            indices.append(i)
    return indices
[/PYTHON]
[TESTS]
# Test case 1:
assert get_indices("a", "a") == [0]
# Test case 2:
assert get_indices("hello", "l") == [2, 3]
# Test case 3:
assert get_indices("hello", "h") == [0]
# Test case 4:
assert get_indices("hello", "o") == [4]
# Test case 5:
assert get_indices("hello", "ll") == [2, 3]
[/TESTS]
