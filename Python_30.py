def get_positive(l: list):
    return [i for i in l if isinstance(i, int) and i > 0]

input_list = [1, -2, 3, 4, -5]
print(get_positive(input_list))