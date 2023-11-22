def specialFilter(nums):
    count = 0
    for num in nums:
        str_num = str(num)
        if num > 10 and int(str_num[0]) % 2 != 0 and int(str_num[-1]) % 2 != 0:
            count += 1
    return count