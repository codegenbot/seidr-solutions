arr = list(map(int, input().split()))

total_sum = sum(arr)
left_sum = 0
cut_index = -1

for i in range(len(arr)):
    right_sum = total_sum - left_sum
    diff = abs(left_sum - right_sum)
    if diff <= total_sum/2:
        cut_index = i
        break
    if i < len(arr) - 1:
        left_sum += arr[i]

if cut_index == len(arr) - 1 or cut_index == 0:
    subvector1 = arr[:]
    subvector2 = []
else:
    subvector1 = arr[:cut_index + 1]
    subvector2 = arr[cut_index + 1:]

print(*subvector1)
print(*subvector2)