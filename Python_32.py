task_type = input()
result = []

if task_type == "poly":
    xs = list(map(float, input().split()))
    x = float(input())
    result = poly(xs, x)
elif task_type == "find_zero":
    result = find_zero()
else:
    result = None

print(str(result))