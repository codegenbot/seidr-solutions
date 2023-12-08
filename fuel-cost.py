nums = []

while True:
    try:
        num = int(input())
        nums.append(num)
    except:
        break

total = sum([(num - 2) // 3 for num in nums])
print(total)