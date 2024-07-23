def sorted_list_sum(lst):
    lst = input("Enter a list of integers separated by spaces: ").split()
    return " ".join(sorted([int(i) for i in lst if int(i) % 2 == 0]))