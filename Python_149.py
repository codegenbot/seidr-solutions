```
def sorted_list_sum(lst):
    total_sum = 0
    for word in lst:
        total_sum += sum(ord(c) for c in word)
    return str(total_sum)