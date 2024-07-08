```
def concatenate(lst):
    result = ""
    for s in lst:
        if result:
            result += ", "
        result += s
    return result