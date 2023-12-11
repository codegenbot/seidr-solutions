[PYTHON]
def luhn(numbers):
    doubled_numbers = []
    for i, num in enumerate(numbers):
        if i % 2 == 0:
            doubled_numbers.append(num * 2)
        else:
            doubled_numbers.append(num)
    
    corrected_numbers = []
    for num in doubled_numbers:
        if num > 9:
            corrected_numbers.append(num - 9)
        else:
            corrected_numbers.append(num)
    
    return sum(corrected_numbers)
[/PYTHON]
[TESTS]
# Test case 1:
assert luhn([0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 8, 7, 6, 5, 4, 3]) == 80
# Test case 2:
assert luhn([9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9]) == 144
# Test case 3:
assert luhn([0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]) == 0
# Test case 4:
assert luhn([5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5]) == 48
# Test case 5:
assert luhn([4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4]) == 96
[/TESTS]
