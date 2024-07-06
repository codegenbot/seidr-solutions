```
def cycpattern_check(a, b):
    if len(b) == 0:
        return True
    if a == b:
        return True
    return (a == b) or (
        (len(a) - 1) * len(b) <= len(a)
        and all(
            a[i:i+len(b)] == b or a[:i] + a[i+len(b):] == b
            for i in range(len(a) - len(b) + 1)
        )
        or (a[:len(b)] == b and a[len(b):].join("") == b)
    )