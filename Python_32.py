print("Enter space-separated integers:")
values = list(map(int, input().split()))
result = sum(val * val for val in values)
print(result)