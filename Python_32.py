if __name__ == "__main__":
    xs = list(map(float, input("Enter coefficients (space-separated): ").split()))

    def find_zero(xs: list):
        n = len(xs)
        if n <= 2:
            raise ValueError("xs must have at least three coefficients")

        a = xs[0]
        b = xs[1]
        c = xs[2] if n > 2 else 0
        d = xs[3] if n > 3 else 0

        if a == 0:
            raise ValueError("xs must have non-zero leading coefficient")

        x = (-b + math.sqrt(b**2 - 4 * a * c)) / (2 * a)
        return round(x, 2)

    print(find_zero(xs))