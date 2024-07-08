def find_zero(xs: list):
    if not xs or xs[0] != 0:
        return None
    if max(xs, key=abs) == 0:
        return 0
    a = max(xs, key=abs)
    for i in range(1, len(xs)):
        if xs[i] == a:
            return -i / xs[i]

print(find_zero([0, 3, 5, -3, 0]))  # Example list input