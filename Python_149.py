def sorted_list_sum(lst):
    return " ".join(map(str, sorted([int(i) for i in lst if int(i) % 2 == 0])))

lst = input("Please enter some numbers separated by space: ").split()
print(sorted_list_sum(lst))