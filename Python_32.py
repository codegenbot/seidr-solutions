def find_zero(xs: list):
    n = len(xs) - 1
    a, b, c = xs[0], xs[1], xs[2]
    return (-b + (b*b - 4*a*c)**0.5) / (2*a)

input_list = list(map(int, input().split()))
result = find_zero(input_list)
print(result)