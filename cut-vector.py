def cut_vector(arr):
    cum_sum = [0] + list(itertools.accumulate(arr))
    total_sum = cum_sum[-1]
    best_diff = total_sum
    best_idx = -1

    for i in range(1, len(arr)):
        diff = abs(2 * cum_sum[i] - total_sum)
        if diff < best_diff:
            best_diff = diff
            best_idx = i

    return arr[:best_idx], arr[best_idx:]


input_vals = [int(input()) for _ in range(2)]
output = cut_vector(input_vals)

for subvector in output:
    print(*subvector)