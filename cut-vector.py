n = int(input())
vector = []
for _ in range(n):
    vector.append(int(input()))

min_diff = float('inf')
cut_index = -1
for i in range(1, n):
    diff = abs(sum(vector[:i]) - sum(vector[i:]))
    if diff == 0:
        cut_index = i
        break
    elif diff < min_diff:
        min_diff = diff
        cut_index = i

left_subvector = vector[:cut_index]
right_subvector = vector[cut_index:]

print(*left_subvector)
print(*right_subvector)
print(0)