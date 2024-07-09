def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        return None
    a = max(xs, key=abs)
    b = -a
    return b

if __name__ == "__main__":
    xs = list(map(int, input().split()))
    result = find_zero(xs)
    print(result)