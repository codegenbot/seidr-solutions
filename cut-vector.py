arr = list(map(int, input().split()))
total_sum = sum(arr)
left_sum = 0
min_diff = float('inf')
cut_index = 0

if len(arr) == 1:
    print(arr, [])
else:
    for i in range(len(arr)):
        left_sum += arr[i]
        right_sum = total_sum - left_sum
        diff = abs(left_sum - right_sum)
        if min_diff > diff or left_sum == right_sum:
            min_diff = diff
            cut_index = i

    cut_index += 1

    print(arr[:cut_index], arr[cut_index:])