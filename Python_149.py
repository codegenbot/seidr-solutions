
def sorted_list_sum(lst):
    even = []
    odd = []
    for word in lst:
        if len(word) % 2 == 0:
            even.append(word)
        else:
            odd.append(word)
    return sorted(even), sorted(odd)