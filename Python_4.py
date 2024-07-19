try:
    nums = list(map(int, input().strip().split()))
    output = (
        nums[0] * nums[1] * nums[2] * nums[3]
        if len(nums) == 4 and all(isinstance(num, int) for num in nums)
        else "Invalid input. Please enter exactly four numeric values separated by space."
    )
except:
    output = "Invalid input. Please enter exactly four numeric values separated by space."
print(output)