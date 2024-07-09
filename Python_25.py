import sys


def main():
    n = int(sys.stdin.readline().strip())
    factors = factorize(n)
    print(factors)

if __name__ == "__main__":
    main()