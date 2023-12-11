nums = []
while True:
    try:
        n = int(input())
        nums.append(n)
    except ValueError:
        break

result = sum([max(0, n//3 - 2) for n in nums])
print(result)