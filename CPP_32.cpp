[PYTHON]
def find_zero(coeffs):
    # Implement the find_zero function here
    pass

def poly(coeffs, solution):
    # Implement the poly function here
    pass

ncoeff = 0
coeffs = []
solution = 0.0

while ncoeff < 10:
    coeff = float(input("Enter coefficient: "))
    coeffs.append(coeff)
    ncoeff += 1

solution = find_zero(coeffs)
assert abs(poly(coeffs, solution)) < 1e-3
[/PYTHON]
[TESTS]
# Test case 1:
assert find_zero([]) == 0.0
# Test case 2:
assert find_zero([1]) == 1.0
# Test case 3:
assert find_zero([1, 2]) == 2.0
# Test case 4:
assert find_zero([1, 2, 3]) == 3.0
# Test case 5:
assert find_zero([1, 2, 3, 4]) == 4.0
[/TESTS]
