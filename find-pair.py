def find_pair(n, nums):
    num_dict = {}
    for num in nums:
        if n - num in num_dict:
            return str(num) + "\n" + str(n - num)
    return "No pair found"