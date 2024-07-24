input_list = list(map(int, input().split()))

total_sum = sum(input_list)
half_sum = total_sum // 2

prefix_sum = 0
min_diff = total_sum
cut_index = 0

for i in range(len(input_list)):
    prefix_sum += input_list[i]
    diff = abs(prefix_sum - (total_sum - prefix_sum))
    if diff < min_diff:
        min_diff = diff
        cut_index = i

subvector1 = input_list[: cut_index + 1]
subvector2 = input_list[cut_index + 1 :]

print(*subvector1)
print(*subvector2)