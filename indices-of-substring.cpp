[PYTHON]
def get_indices(text, target):
    result = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            result.append(i)
    return result
[/PYTHON]
[TESTS]
# Test case 1:
assert get_indices("hello", "ll") == [2, 3]
# Test case 2:
assert get_indices("hello", "l") == [2, 3]
# Test case 3:
assert get_indices("hello", "h") == [0]
# Test case 4:
assert get_indices("hello", "o") == [4]
# Test case 5:
assert get_indices("hello", "e") == [1]
# Test case 6:
assert get_indices("hello", "a") == []
[/TESTS]
