def incr_list(l):
    return [num + 1 for num in l]


def check(func):
    input_list = [1, 2, 3, 4, 5]
    output_list = func(input_list)
    return output_list


print(check(incr_list))