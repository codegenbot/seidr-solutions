def mostCommonAfterN(n, nums):
    count_dict = {}
    for num in nums:
        if num not in count_dict:
            count_dict[num] = 1
        else:
            count_dict[num] += 1
    max_num = -1
    max_count = -1
    for num, freq in count_dict.items():
        if freq > max_count and num >= n:
            max_num = num
            max_count = freq
    return max_num