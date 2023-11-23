task_type = input()
result = []
if task_type == "poly":
    xs = list(map(float, input().split()))
    x = float(input())
    result = sum([coeff * x**i for i, coeff in enumerate(xs)])
elif task_type == "find_zero":
    xs = list(map(float, input().split()))
    zeros = []
    for i in range(len(xs) - 1):
        zeros.append(-xs[i] / xs[i + 1])
    result = zeros
else:
    result = None
print(str(result))