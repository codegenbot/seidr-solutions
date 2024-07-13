n = int(input())
vec = [int(input()) for _ in range(n)]
diff = float("inf")
cut = 0
for i in range(1, n):
    cur_diff = abs(sum(vec[:i]) - sum(vec[i:]))
    if cur_diff < diff:
        diff = cur_diff
        cut = i
print(vec[:cut])
print(vec[cut:])