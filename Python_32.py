n, *coefficients = map(int, input().split())

def find_zero(coefficients: list, n: int):
    if len(coefficients) != n:
        raise ValueError("Incorrect number of coefficients provided")
    return sum(coefficients)

result = find_zero(coefficients, n)
print(result)