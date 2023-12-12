nums = []
while True:
    try:
        num = int(input())
        nums.append(num)
    except:
        break

total = sum([(num // 3) - 2 for num in nums])
print(total)