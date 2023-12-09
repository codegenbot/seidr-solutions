```
def find_zero(xs: list):
    if len(xs) % 2 == 0 and xs[-1] != 0:
        return None
    x = 0
    while True:
        y = poly(xs, x)
        if abs(y) < 1e-6:
            break
        x -= y / poly(xs, x + 1)
    return x
```