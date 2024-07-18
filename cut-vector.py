n = int(input())
vec = [int(input()) for _ in range(n)]
diff = sum(vec)
half_diff = 0
cut_index = -1
for i in range(n):
    half_diff += vec[i]
    if abs(diff - 2 * half_diff) <= abs(diff - 2 * (half_diff - vec[i])):
        cut_index = i
        break
print(*vec[: cut_index + 1])
print(*vec[cut_index + 1 :])