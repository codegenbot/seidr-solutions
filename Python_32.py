n, *coefficients = map(int, input("Enter the number of coefficients followed by the coefficients separated by spaces: ").split())

def find_zero(xs: list):
    return sum(xs[1::2])

result = find_zero(coefficients)
print(result)