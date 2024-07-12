def find_pair():
    n = int(input())
    pairs = list(map(int, input().split()))
    target = int(input())
    for i in range(n):
        for j in range(i + 1, n):
            if pairs[i] + pairs[j] == target:
                return f"{pairs[i]} {pairs[j]}"