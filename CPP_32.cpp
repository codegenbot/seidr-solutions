[PYTHON]
def find_zero(coeffs):
    x = 0
    for i in range(len(coeffs)):
        x += coeffs[i] * x**i
    return x

def poly(coeffs):
    y = 0
    for i in range(len(coeffs)):
        y += coeffs[i] * y**i
    return y

def main():
    coeffs = [1, -2, 3]
    solution = find_zero(coeffs)
    print("The solution is:", solution)
    assert abs(poly(coeffs) - solution) < 1e-3

if __name__ == "__main__":
    main()
[/PYTHON]
