def find_zero(xs: list):
    if len(xs) % 2 != 0 or xs[0] != 0:
        return None
    a = max(xs, key=abs)
    for i in range(1, len(xs)):
        if xs[i] == a:
            result = -i / xs[i]
            return round(result, 2)  # Ensure the result is rounded to 2 decimal places