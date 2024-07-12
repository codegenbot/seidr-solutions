try:
    lst = input("Enter a list of numbers separated by space: ").split()
    int_lst = [int(i) for i in lst if i.lstrip('-').isdigit()]
    print(sum_squares(int_lst))

except ValueError as e:
    print("Invalid input. Please enter numeric values.")

def sum_squares(lst):
    return sum(map(lambda x: int(x)**2, lst))