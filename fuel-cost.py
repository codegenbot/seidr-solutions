total = sum(map(lambda x: int(x) // 3 - 2 if int(x) % 3 != 0 else int(x) // 3, input().split()))
print(total)