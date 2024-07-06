def sorted_list_sum(lst):
    result = []
    for word in sorted(lst, key=len):
        if len(word) % 2 == 0:
            result.append(word)
    return sorted(result, key=len)