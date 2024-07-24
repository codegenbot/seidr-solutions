n = int(input("Enter the number of coefficients: "))
coefficients = list(map(int, input("Enter the coefficients separated by space: ").split()))

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("Number of coefficients should be even")
    return sum(xs)

result = find_zero(coefficients)
print(result)