n = int(input())
v = [int(input()) for _ in range(n)]
diff = sum(v)
half_diff = sum(v) / 2
for i in range(n):
    if sum(v[: i + 1]) >= half_diff:
        if abs(sum(v[: i + 1]) - half_diff) < abs(sum(v[:i]) - half_diff):
            print(*v[: i + 1])
            print(*v[i + 1 :])
            break
        else:
            print(*v[:i])
            print(*v[i:])
            break