def calculate_cut_index(arr):
    total_sum = sum(arr)
    left_sum = 0
    for i in range(len(arr)):
        left_sum += arr[i]
        if left_sum * 2 == total_sum or (left_sum * 2 - total_sum) ** 2 < (
            left_sum * 2 - total_sum
        ):
            return i + 1
    return 0


cut_index = calculate_cut_index(arr)

if cut_index == 0:
    subvector1 = [arr[0]]
    subvector2 = arr[1:]
else:
    subvector1 = arr[:cut_index]
    subvector2 = arr[cut_index:]

print(*subvector1)
print(*subvector2)