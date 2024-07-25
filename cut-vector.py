def cut_vector(arr):
    total_sum = sum(arr)
    half_sum = total_sum // 2
    current_sum = 0
    for i in range(len(arr)):
        current_sum += arr[i]
        if current_sum >= half_sum:
            if current_sum == half_sum:
                return arr[: i + 1], arr[i + 1 :]
            elif current_sum - half_sum < half_sum - (current_sum - arr[i]):
                return arr[: i + 1], arr[i + 1 :]
            else:
                return arr[:i], arr[i:]
    return arr, [0]


# Input processing
vector = list(map(int, input().split()))
left_subvector, right_subvector = cut_vector(vector)
print(*left_subvector)
print(*right_subvector)