def increment_list(l):
    return [x + 1 for x in l]

input_list = eval(input())
output_list = increment_list(input_list)
print(output_list)