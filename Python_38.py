def decode_cyclic():
    s = input().strip().split(" ")
    if len(s) == 0:
        return ""
    try:
        nums = [int(num) for num in s]
        result = ""
        for i in range(len(nums)):
            if i > 1:
                result += str((nums[i] - nums[i-1]) * nums[i-2])
        return result
    except ValueError:
        return "Invalid input format"
print(decode_cyclic())