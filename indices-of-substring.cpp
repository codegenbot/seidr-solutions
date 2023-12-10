[PYTHON]
def get_indices_of_substring(string, substring):
    indices = []
    for i in range(len(string)):
        if string[i:i+len(substring)] == substring:
            indices.append(i)
    return indices
[/PYTHON]
[TESTS]
# Test case 1:
assert get_indices_of_substring("hello", "ll") == [2, 3]
# Test case 2:
assert get_indices_of_substring("hello", "ll") == [2, 3]
# Test case 3:
assert get_indices_of_substring("hello", "l") == [2, 3]
# Test case 4:
assert get_indices_of_substring("hello", "h") == [0]
# Test case 5:
assert get_indices_of_substring("hello", "o") == [4]
[/TESTS]
