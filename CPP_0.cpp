[PYTHON]
def has_close_elements(numbers, threshold):
    for i in range(len(numbers)):
        for j in range(i+1, len(numbers)):
            if abs(numbers[i] - numbers[j]) <= threshold:
                return True
    return False
[/PYTHON]
[TESTS]
# Test case 1:
assert has_close_elements([1.0, 2.0, 3.0], 0.5) == False
# Test case 2:
assert has_close_elements([1.0, 2.8, 3.0, 4.0, 5.0, 2.0], 0.3) == True
# Test case 3:
assert has_close_elements([1.0, 2.0, 3.0], 0.3) == False
[/TESTS]
