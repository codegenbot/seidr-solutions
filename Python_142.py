lst = input("Enter a list of numbers separated by space: ").split()
int_lst = [int(i) for i in lst if i.isdigit()]
print(sum_squares(int_lst))

def sum_squares(lst):
    return sum([i ** 2 for i in lst])