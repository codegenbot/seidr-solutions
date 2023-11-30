def read_input():
    n = int(input())
    coeffs = list(map(float, input().strip().split()))
    x = float(input())
    return coeffs, x


def find_zero(coeffs, x):
    # Implementing Newton's method to find the zero
    eps = 1e-9  # small value for termination condition
    max_iter = 1000  # maximum number of iterations

    # Initializing the initial guess for the zero
    guess = x

    for _ in range(max_iter):
        f = 0.0

        # Evaluate the polynomial using Horner's method
        for i in range(len(coeffs) - 1, -1, -1):
            f = f * guess + coeffs[i]

        # Calculate the derivative of the polynomial
        f_prime = 0.0
        for i in range(len(coeffs) - 1, 0, -1):
            f_prime = f_prime * guess + i * coeffs[i]

        # Update the guess for the zero using Newton's method
        delta = f / f_prime
        guess -= delta

        # Check termination condition
        if abs(delta) < eps:
            return guess

    # If no zero is found, return None
    return None


coeffs, x = read_input()
result = find_zero(coeffs, x)
print(result)