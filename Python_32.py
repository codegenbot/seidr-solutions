def find_zero(xs: list):
    n = len(xs) // 2
    a = [1] + [-x for x in xs]  # f(x) = a * (x - r1) * (x - r2) * ... * (x - rn)
    r = [i for i in range(n)]
    for i in range(1, n):  # a * (x - r1) * (x - r2) * ... * (x - rn) / (x - r1) = b * (x - r2) * ... * (x - rn)
        b = [sum(a[j] * r[j] for j in range(n + 1)) / r[i] for i in range(n + 1)]
        a = [0] * (n + 1)
        for j in range(n + 1):
            a[j] = b[j]
            for k in range(j - 1, n):
                a[j] -= b[k] * r[j - k]
    return [round(root, 5) for root in sorted(list(set([round(x.real, 5) for x in [(-a[i] / a[i + 1]) for i in range(n)] if x.imag == 0]))]