def find_zero():
    xs = list(map(float, input().split()))
    n = len(xs) - 1
    a = xs[-1]
    b = xs[-2]
    return -b / a

input_values = input("Enter numbers separated by space: ")
result = find_zero()
print(result)