n = int(input())
vec = [int(input()) for _ in range(n)]
diff = float("inf")
cut_index = 0

for i in range(1, n):
    current_diff = abs(sum(vec[:i]) - sum(vec[i:]))
    if current_diff < diff:
        diff = current_diff
        cut_index = i

print(*vec[:cut_index])
print(*vec[cut_index:])