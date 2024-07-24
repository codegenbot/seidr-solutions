def sorted_list_sum(lst):
    alpha_sum = sum(ord(i) for i in "".join(filter(str.isalpha, map(str, lst))))
    return sum(int(i) for i in str(alpha_sum))