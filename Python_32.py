def find_zero(coeffs, x):
    result = 0
    for i in range(len(coeffs)):
        result += coeffs[i] * (x ** i)
    return result

def read_input():
    n = int(input())
    coeffs = list(map(float, input().strip().split()))
    x = float(input())
    return coeffs, x

coeffs, x = read_input()
output = find_zero(coeffs, x)
print(output)