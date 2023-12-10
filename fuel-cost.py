nums = []
while True:
    try:
        nums.append(int(input()))
    except:
        break

result = sum([max(0, num//3 - 2) for num in nums])
print(result)