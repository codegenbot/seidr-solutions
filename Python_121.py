def sum_of_odd_numbers(lst):
    solution = sum(i for i in lst if i % 2 != 0)
    return solution

print(sum_of_odd_numbers([1, 2, 3, 4, 5]))