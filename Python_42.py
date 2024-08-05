def increment_list(l):
    return [num + 1 for num in l]

input_list = list(map(int, input().split()))
result = increment_list(input_list)
print(result)