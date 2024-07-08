def find_zero(xs: list):
    n = len(xs) - 1
    a, b = xs[0], max(map(abs, xs))
    for i in range(n):
        if xs[i] == b:
            a = xs[i + 1]
            break
    return -a / b

input_list = list(map(int, input().split()))
print(find_zero(input_list))