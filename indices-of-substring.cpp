[PYTHON]
def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            result.append(i)
    return result
[/PYTHON]
[TESTS]
# Test case 1:
assert indices_of_substring("banana", "ana") == [1, 3]
# Test case 2:
assert indices_of_substring("banana", "an") == [1, 3]
# Test case 3:
assert indices_of_substring("banana", "b") == [0]
# Test case 4:
assert indices_of_substring("banana", "n") == [2, 4]
[/TESTS]
