```
def sorted_list_sum(lst):
    s = "".join(lst).replace(" ", "")
    smallest = min(lst)
    return [str(i) for i in range(ord(smallest), ord(max(lst))+1)]