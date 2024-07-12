arr = list(map(int, input().split()))

if len(arr) < 2:
    print(arr)
else:
    total_sum = sum(arr)
    left_sum = arr[0]
    min_diff = abs(total_sum - 2 * arr[0] - arr[1])
    cut_index = -1

    if len(arr) == 2 or len(arr) == 3:
        print(arr[:1], arr[1:])
    else:
        for i in range(1, len(arr) - 1):
            right_sum = total_sum - left_sum - arr[i]
            diff = abs(left_sum - right_sum)
            if right_sum == left_sum or diff <= min_diff:
                min_diff = diff
                cut_index = i
            left_sum += arr[i]

        print(arr[: cut_index + 1], arr[cut_index + 1 :])