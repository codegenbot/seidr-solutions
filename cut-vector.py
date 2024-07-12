n = int(input())
v = [int(input()) for _ in range(n)]

total_sum = sum(v)
half_sum = total_sum // 2
current_sum = 0
cut_index = 0

for i in range(n):
    current_sum += v[i]
    if current_sum >= half_sum:
        cut_index = i
        break

if abs(current_sum - half_sum) < abs(current_sum - v[cut_index] - half_sum):
    cut_index -= 1

print(*v[: cut_index + 1])
print(*v[cut_index + 1 :])