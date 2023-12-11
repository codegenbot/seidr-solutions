[PYTHON]
def get_letter_grade(score):
    if score >= 90:
        return "A"
    elif score >= 80:
        return "B"
    elif score >= 70:
        return "C"
    elif score >= 60:
        return "D"
    else:
        return "F"

def numerical_letter_grade(grades):
    return [get_letter_grade(score) for score in grades]
[/PYTHON]
[TESTS]
# Test case 1:
assert numerical_letter_grade([]) == []
# Test case 2:
assert numerical_letter_grade([3, 4, 5, 6, 7, 8, 9, 10]) == ['F', 'F', 'F', 'F', 'F', 'F', 'F', 'F']
# Test case 3:
assert numerical_letter_grade([3, 4, 5, 6, 7, 8, 9, 10, 11]) == ['F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F']
# Test case 4:
assert numerical_letter_grade([3, 4, 5, 6, 7, 8, 9, 10, 11, 12]) == ['F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F']
# Test case 5:
assert numerical_letter_grade([3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]) == ['F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F']
[/TESTS]

```