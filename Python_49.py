def modp(n: int, p: int):
    return pow(n, p, p)

if __name__ == "__main__":
    x = int(input("Enter n/p (separated by space): "))
    n, p = map(int, x.split())
    print(modp(n, p))