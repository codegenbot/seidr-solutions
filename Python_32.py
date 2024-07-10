print("Enter space-separated integers:")
values = list(map(int, raw_input().split()))
result = sum(val * val for val in values)
print(result)