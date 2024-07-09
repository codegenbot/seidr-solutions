def find_zero(input_list):
    for index, element in enumerate(input_list):
        if element == 0:
            return index

user_input = [1, 2, 3, 4, 5]
result = find_zero(user_input)
print(result)