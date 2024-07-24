def sorted_list_sum(lst):
    if all(i.isnumeric() for i in lst) and len(set(len(x) for x in lst)) == 1:
        return sum(sorted(map(int, [i * int('0' * (len(max(lst)) - len(i))) for i in lst])))
    else:
        print("Invalid input. Please enter a list of numbers.")