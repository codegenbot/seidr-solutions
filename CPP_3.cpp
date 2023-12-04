[PYTHON]
def below_zero(operations):
    balance = 0
    for op in operations:
        balance += op
        if balance < 0:
            return True
    return False
[/PYTHON]
[TESTS]
# Test case 1:
assert below_zero([]) == False
# Test case 2:
assert below_zero([1, 2, 3]) == False
# Test case 3:
assert below_zero([1, 2, -4, 5]) == True
[/TESTS]

```