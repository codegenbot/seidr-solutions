```
def sort_even(l: list):
    return [
        x if i % 2 != 0 else (y if abs(y) < abs(x) else x)
        for i, (x, y) in enumerate(zip(sorted([abs(a) for a in l], reverse=True), l))
    ]