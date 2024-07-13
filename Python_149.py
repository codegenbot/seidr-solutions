def sorted_list_sum():
    lst = list(map(int, input("Enter space-separated integers: ").split()))
    return sum(sorted(lst))