def find_zero(xs: list, n: int):
    if n % 2 != 0:
        raise ValueError("Number of coefficients should be even")
    return sum(xs)

n = int(input("Enter the number of coefficients: "))
coefficients = list(map(int, input("Enter the coefficients separated by space: ").split()))
result = find_zero(coefficients, n)
print(result)