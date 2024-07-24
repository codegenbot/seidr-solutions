def sorted_list_sum(lst):
    if all(i.isdigit() for i in lst):  
        return sum(sorted(map(int, lst)))  
    else:
        print("Invalid input. Please enter a list of numbers.")