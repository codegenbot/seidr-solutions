```
def basement(nums):
    total = 0
    sums = [0]
    for i, num in enumerate(nums):
        total += num
        sums.append(total)
    return min(i+1 for i, s in enumerate(sums) if s < 0) or -1