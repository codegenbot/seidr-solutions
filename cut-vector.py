n = int(input())
array = [int(input()) for _ in range(n)]

total_sum = sum(array)
left_sum = 0
right_sum = total_sum

diff = abs(left_sum - right_sum)
cut_index = 0

for i in range(n):
    left_sum += array[i]
    right_sum -= array[i]
    new_diff = abs(left_sum - right_sum)

    if new_diff < diff or (new_diff == diff and array[i] == array[i + 1]):
        diff = new_diff
        cut_index = i

output1 = array[: cut_index + 1]
output2 = array[cut_index + 1 :]

print(*output1)
print(*output2 or [0])