n = int(input())
total_sum = (n * (n + 1)) // 2
half_sum = total_sum // 2
running_sum = 0
idx = 0

while running_sum + idx + 1 <= half_sum:
    idx += 1
    running_sum += idx

print(list(range(1, idx + 1)))
print(list(range(idx + 1, n + 1)))