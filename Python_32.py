
[PYTHON]
def find_zero(xs):
    x = int(input("Enter a number: "))
    result = 0
    for i in range(len(xs)):
        if xs[i] == x:
            result += 1
    return result
[/PYTHON]
[TESTS]
# Test case 1:
assert find_zero([]) == 0
# Test case 2:
assert find_zero([1, 2, 3, 4, 5]) == 0
# Test case 3:
assert find_zero([1, 2, 0, 4, 5]) == 1
[/TESTS]
