```Python
def sorted_list_sum(lst):
    if all(x.strip().isalpha() for x in lst) and len(set(len(x.strip()) for x in lst)) == 1:
        max_len = max(len(x.strip()) for x in lst)
        return [''.join(sorted(i.ljust(max_len))) for i in set(''.join(sorted(i)) for i in lst)]
    else:
        print("Invalid input. Please enter a list of strings.")