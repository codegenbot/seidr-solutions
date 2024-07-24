def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)


def main():
    n = int(input())
    m = int(input())

    print(gcd(n, m))


if __name__ == "__main__":
    main()