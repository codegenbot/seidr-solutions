def sorted_list_sum(lst):
    s = "".join(sorted(set("".join(map(str, filter(lambda x: str(x).isalpha(), lst)))))).replace(" ", "")
    return list(s)