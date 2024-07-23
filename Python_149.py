def sorted_list_sum(lst):
    lst = [
        int(i) for i in input("Enter a list of integers separated by spaces: ").split()
    ]
    return " ".join(map(str, sorted([i for i in lst if i % 2 == 0])))