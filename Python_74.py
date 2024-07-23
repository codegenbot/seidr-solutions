```
def total_match(lst1, lst2):
    total_chars1 = sum(len(s) for s in lst1)
    total_chars2 = sum(len(s) for s in lst2)
    
    if len(lst1) > len(lst2):
        return "List 1 has more strings"
    elif len(lst1) < len(lst2):
        return "List 2 has more strings"
    else:
        return "Both lists have the same number of strings"