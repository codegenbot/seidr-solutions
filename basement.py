def basement(nums):
    seen_negative = False
    for i in range(len(nums)):
        total = sum(nums[:i+1])
        if total < 0:
            seen_negative = True
            break
    return -1 if not seen_negative else i + 1