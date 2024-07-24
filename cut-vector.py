n = int(input())
vector = [int(input()) for _ in range(n)]

diff = float("inf")
cut_index = 0

for i in range(1, n):
    current_diff = abs(sum(vector[:i]) - sum(vector[i:]))
    if current_diff < diff:
        diff = current_diff
        cut_index = i

print(*vector[:cut_index])
print(*vector[cut_index:])