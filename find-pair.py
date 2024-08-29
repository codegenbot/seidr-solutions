def find_pair():
    n = int(input())
    pairs = [list(map(int, input().split())) for _ in range(n)]
    target = int(input())

    for pair in pairs:
        if sum(pair) == target:
            return " ".join(map(str, pair))

    return "No such pair found"


print(find_pair())