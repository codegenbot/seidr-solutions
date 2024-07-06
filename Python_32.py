def find_zero(xs):
    if len(xs) % 2 == 0 and xs[-1] != 0:
        return None
    for i in range(len(xs) // 2):
        x = -xs[i] / xs[i + 1]
        if poly(xs, x) < 0.000001:
            return x
    return None


def main():
    num = int(input("Enter a number: "))
    find_zero([num])