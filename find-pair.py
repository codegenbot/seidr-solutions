def find_pair(n, nums):
    seen = set()
    pairs = []

    for num in nums:
        complement = target - num

        if complement in seen:
            return str(num) + "\n" + str(complement)

        seen.add(num)

    return "No pair found"