def smallest_change(arr):
    n = len(arr)
    total_changes = 0
    odd_count = arr.count(1)

    while True:
        changes = sum(a != b for a, b in zip(arr, [i % 2 for i in range(n)]))
        if changes < total_changes or not total_changes:
            total_changes = changes
        else:
            break

    return total_changes