def specialFilter(nums):
    count = 0
    for num in nums:
        if abs(num) > 10 and str(abs(num))[-1] % 2 != 0 and str(abs(num))[0] % 2 != 0:
            count += 1
    return count

user_input = list(map(int, input("Enter space-separated numbers: ").split()))
print(specialFilter(user_input))