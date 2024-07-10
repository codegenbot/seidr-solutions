```
def specialFilter(nums):
    count = 0
    for num in nums:
        if abs(num) > 10 and str(abs(num))[-1] % 2 != 0 and int(str(abs(num))[0]) % 2 != 0:
            count += 1
        elif (abs(num) <= 10 and (str(abs(num))[-1] % 2 != 0 or int(str(abs(num))[0]) % 2 != 0)):
            count += 1
    return count

nums = [12, -15, 21, -20]
print(specialFilter(nums))