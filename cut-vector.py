n = int(input())
vector = [int(input()) for _ in range(n)]
min_diff = abs(sum(vector))
cut_index = -1

for i in range(1, n):
    diff = abs(sum(vector[:i]) - sum(vector[i:]))
    if diff < min_diff:
        min_diff = diff
        cut_index = i

print(*vector[:cut_index])
print(*vector[cut_index:])