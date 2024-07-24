```
def smallest_change(coins):
    half = len(coins) // 2
    first_half = coins[:half]
    second_half = coins[half:]
    if len(first_half) != len(second_half):
        return -1
    diff_count = 0
    for i in range(len(first_half)):
        if first_half[i] > second_half[-i-1]:
            diff_count += second_half[-i-1]
            while first_half[i] > second_half[-i-1]:
                coins[coins.index(second_half[-i-1])] -= 1
                second_half[-i-1] -= 1
        elif first_half[i] < second_half[-i-1]:
            diff_count += first_half[i]
            while first_half[i] < second_half[-i-1]:
                coins[coins.index(first_half[i])] += 1
                first_half[i] += 1
    return diff_count