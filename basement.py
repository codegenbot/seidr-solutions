```
def basement(nums):
    total = 0
    for i, num in enumerate(nums):
        total += num
        if total < 0:
            continue
        elif total == 0:
            break 
    return min(i+1, len(nums)) if total < 0 else None