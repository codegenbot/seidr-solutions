def find_pair(n, nums):
    seen = {}
    for num in nums:
        if -num in seen:
            return f"{n} {num}"
        seen[num] = n
    return "No pair found"