```
def sorted_list_sum(lst):
    return sum(sorted(map(int, ''.join(filter(str.isalpha, str(lst))))))