def sorted_list_sum(lst):
    lst = list(map(int, input("Enter a list of integers separated by spaces: ").split()))
    return " ".join(sorted([i for i in lst if i % 2 == 0]))