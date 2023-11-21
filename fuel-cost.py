nums = []

while True:
    try:
        nums.append(int(input()))
    except EOFError:
        break

total = sum([num//3 - 2 for num in nums])
print(total)