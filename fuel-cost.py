nums = []
while True:
    try:
        nums.append(int(input()))
    except EOFError:
        break

result = sum([(num // 3) - 2 for num in nums])
print(result)