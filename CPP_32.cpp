[PYTHON]
def find_zero(coeffs):
    # Implement the find_zero function here
    pass

def poly(coeffs, x):
    # Implement the poly function here
    pass

def main():
    coeffs = []
    solution = 0.0
    while len(coeffs) < 10:
        coeff = float(input("Enter coefficient: "))
        coeffs.append(coeff)
    solution = find_zero(coeffs)
    assert abs(poly(coeffs, solution)) < 1e-3
    print(f"The solution is {solution}")

if __name__ == "__main__":
    main()
[/PYTHON]
[TESTS]
# Test case 1:
coeffs = [1, 2, 3, 4, 5]
solution = find_zero(coeffs)
assert abs(poly(coeffs, solution)) < 1e-3
# Test case 2:
coeffs = [1, 2, 3, 4, 5, 6]
solution = find_zero(coeffs)
assert abs(poly(coeffs, solution)) < 1e-3
# Test case 3:
coeffs = [1, 2, 3, 4, 5, 6, 7]
solution = find_zero(coeffs)
assert abs(poly(coeffs, solution)) < 1e-3
[/TESTS]
