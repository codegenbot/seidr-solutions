def find_zero(xs: list):
    n = len(xs)
    a = xs[n - 1]
    b = xs[n - 2]
    return -b / a

n = int(input("Enter the number of values in the list: "))
print("Enter space-separated values for the list:")
xs = list(map(float, input().split()))

result = find_zero(xs)
print(result)