input_list = [int(input()) for _ in range(int(input()))]
result = sum((x // 3) - 2 for x in input_list)
print(result)