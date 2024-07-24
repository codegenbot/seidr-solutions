n = int(input())
vec = [int(input()) for _ in range(n)]

total_sum = sum(vec)
left_sum = 0
min_diff = total_sum

for i in range(n):
    left_sum += vec[i]
    right_sum = total_sum - left_sum
    diff = abs(left_sum - right_sum)
    if diff <= min_diff:
        min_diff = diff
        cut_index = i

output1 = vec[: cut_index + 1]
output2 = vec[cut_index + 1 :]

print(*output1)
print(*output2)