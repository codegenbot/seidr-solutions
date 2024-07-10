def modp(n: int, p: int):
    return pow(n, p, p)

if __name__ == "__main__":
    print(modp(int(input("Enter n: ")), int(input("Enter p: "))))