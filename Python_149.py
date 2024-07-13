```
def sorted_list_sum(lst):
    s = "".join(sorted(set("".join(map(str,filter(str.isalpha,lst)))))).replace(" ", "")
    return list(s)