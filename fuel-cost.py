n = int(input())
input_values = [int(input()) for _ in range(n)]
result = sum((value // 3) - 2 for value in input_values)
print(result)