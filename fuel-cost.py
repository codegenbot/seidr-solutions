def solve(n):
    return sum((i // 3) - 2 for i in map(int, str(n).split(",")))


if __name__ == "__main__":
    n = list(map(int, input().strip().split(",")))
    print(solve(n))