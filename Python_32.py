print("Enter space-separated list of floating-point numbers:")
try:
    xs = list(map(float, input().split()))
    if all(isinstance(x, float) for x in xs):
        print(xs)
    else:
        print("Input must contain only floating-point numbers.")
except ValueError:
    print("Input must contain only floating-point numbers.")