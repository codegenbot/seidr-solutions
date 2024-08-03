```
def specialFilter(nums):
    count = 0
    for num in nums:
        if abs(num) > 10 and (abs(num) % 10 % 2 == 1 or abs(num) % 10 % 2 == 3 or abs(num) % 10 % 2 == 5 or abs(num) % 10 % 2 == 7 or abs(num) % 10 % 2 == 9):
            count += 1
    return count