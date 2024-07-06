def sorted_list_sum(lst):
    even_numbers = [int(num) for num in lst if int(num) % 2 == 0]
    return sum(sorted(even_numbers))

input_lst = input("Enter list of numbers: ")
print(sorted_list_sum(input_lst.split()))