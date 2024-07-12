def find_zero():
    xs = list(map(float, input("Enter space-separated coefficients followed by the constant term: ").split()))
    n = len(xs) - 1
    a = xs[-1]
    b = xs[-2]
    return -b / a

result = find_zero()
print(result)