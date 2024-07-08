arr = list(map(int, input().split()))

closest_diff = float('inf')
cut_index = 0

for i in range(1, len(arr)):
    diff = abs(sum(arr[:i]) - sum(arr[i:]))
    if diff < closest_diff:
        closest_diff = diff
        cut_index = i

if cut_index == 0:
    subvector1 = [arr[0]]
    subvector2 = arr[1:]
else:
    subvector1 = arr[:cut_index]
    subvector2 = arr[cut_index:]

print(*subvector1)
print(*subvector2)