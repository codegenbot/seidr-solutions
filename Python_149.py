def sorted_list_sum(lst):
    return sum(
        int(i) for i in sorted(str(sum(map(ord, filter(str.isalpha, map(str, lst))))))
    )