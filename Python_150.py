
def x_or_y(n, x, y):
    """A simple program which should return the value of x if n is
    a prime number and should return the value of y otherwise."""
    for i in range(2, n):
        if n % i == 0:
            return y
    return x


def main():
    print(x_or_y(7, 34, 12) == 34)
    print(x_or_y(15, 8, 5) == 5)

if __name__ == "__main__":
    main()
