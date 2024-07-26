nums = list(map(int, input().split()))
total = sum(map(lambda x: max(x // 3 - 2, 0), nums))
print(total)