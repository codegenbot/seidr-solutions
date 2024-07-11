if cut_index != -1:
    subvector1 = nums[:cut_index+1]
    subvector2 = nums[cut_index+1:]
    print(*subvector1)
    print(*subvector2)
else:
    print(*nums)
    print()