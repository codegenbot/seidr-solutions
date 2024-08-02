n = int(input())
v = [int(input()) for _ in range(n)]
total_sum = sum(v)
half_sum = total_sum // 2

curr_sum = 0
cut_index = None
for i in range(n):
    curr_sum += v[i]
    if curr_sum >= half_sum:
        cut_index = i
        break

if curr_sum - half_sum < half_sum - (curr_sum - v[cut_index]):
    subvector1 = v[: cut_index + 1]
    subvector2 = v[cut_index + 1 :]
else:
    subvector1 = v[:cut_index]
    subvector2 = v[cut_index:]

print(*subvector1)
print(*subvector2)