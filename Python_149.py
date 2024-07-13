def sorted_list_sum(lst):
    s = "".join(lst).replace(" ", "")
    return [str(i) for i in range(int(s[0]), int(''.join(map(str,sorted(set(s))))) + 1)]