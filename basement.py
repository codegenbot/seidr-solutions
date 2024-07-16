def basement(nums):
    cum_sum = 0
    neg_index = -1
    for i, num in enumerate(nums):
        cum_sum += num
        if cum_sum < 0 and neg_index == -1:
            neg_index = i
    return neg_index if neg_index != -1 else None