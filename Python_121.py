def count_even_numbers(input_list):
    return sum(i % 2 == 0 for i in input_list)


input_list = [4, 2, 6]
print(count_even_numbers(input_list))