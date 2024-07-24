def min_coin_changes(arr):
    if len(arr) != 2:
        return "Invalid input: Array should contain exactly two elements."
    if not all(isinstance(x, int) for x in arr):
        return "Invalid input: All elements of the array should be integers."

    target = sum(arr)
    min_coin_changes = float("inf")

    for i in range(1, target + 1):
        coin_changes = 0
        remaining = i

        while remaining > 0:
            if remaining >= max(arr):
                coin_changes += 1
                remaining -= max(arr)
            else:
                coin_changes += (max(arr) - 1 - (remaining - 1)) // max(arr) + 1
                break

        min_coin_changes = min(min_coin_changes, coin_changes)

    return min_coin_changes