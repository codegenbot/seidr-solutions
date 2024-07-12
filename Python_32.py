def find_zero(input_list):
    a, b = input_list[-2:]
    return -b / a

input_list = list(map(float, input().split()))
result = find_zero(input_list)
print(result)