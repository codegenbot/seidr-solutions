def find_zero():
    xs = list(map(float, input().split()))
    n = len(xs) - 1
    a = xs[-1]
    b = xs[-2]
    return -b / a

# Call the function to get the result
result = find_zero()
print(result)