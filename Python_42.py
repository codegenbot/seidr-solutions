def increment_list(l):
    return [x + 1 for x in l]

input_list = list(map(int, input().split()))
result = increment_list(input_list)
print(result)