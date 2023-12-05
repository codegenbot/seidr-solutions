[PYTHON]
def get_gcd(a, b):
    if a == 0:
        return b
    return get_gcd(b % a, a)

def get_indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            result.append(i)
    return result
[/PYTHON]
[TESTS]
# Test case 1:
assert get_gcd(10, 15) == 5
# Test case 2:
assert get_gcd(10, 0) == 10
# Test case 3:
assert get_gcd(0, 15) == 15
# Test case 4:
assert get_indices_of_substring("abcde", "ab") == [0, 2]
# Test case 5:
assert get_indices_of_substring("abcde", "bc") == [1, 3]
[/TESTS]
