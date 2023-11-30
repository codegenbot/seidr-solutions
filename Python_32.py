def read_input():
    n = int(input())
    coeffs = list(map(float, input().strip().split()))
    x = float(input())
    return coeffs, x

def find_zero(coeffs, x):
    # Your logic to find the zero goes here
    # Replace this placeholder return statement with your actual code
    
    # Initialize the sum as 0
    result = 0
    
    # Iterate through the coefficients
    for i in range(len(coeffs)):
        # Compute the product of the coefficient and x raised to the power of i
        result += coeffs[i] * x**i
    
    return result

coeffs, x = read_input()
result = find_zero(coeffs, x)
print(result)