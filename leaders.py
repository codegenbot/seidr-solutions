def leaders(a):
    return [a[i] if a[i] >= max(a[i + 1 :]) else [] for i in range(len(a) - 1)] + [
        a[-1]
    ]