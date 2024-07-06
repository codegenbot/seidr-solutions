```
def beautifulDays(i, j, k):
    count = 0
    for day in range(int(i), int(j)+1):
        rev_day = str(day)[::-1]
        if abs(int(day) - int(rev_day)) <= k:
            count += 1
    return count