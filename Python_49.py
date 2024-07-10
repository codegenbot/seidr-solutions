def modp(n: int, p: int):
    return pow(n, p, p)

if __name__ == "__main__":
    user_input = input("Enter n and p (separated by space): ")
    n, p = map(int, user_input.split())
    print(modp(n, p))