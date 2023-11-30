def sorted_list(nums):
    return sorted(filter(lambda x: len(x) % 2 == 0, nums))

assert sorted_list(["aaaa", "bbbb", "dd", "cc"]) == ["cc", "dd", "aaaa", "bbbb"]