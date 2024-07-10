def check(lst):
    if len(set(lst)) == 1:
        return "All elements are equal"
    elif len(lst) != len(set(lst)):
        return "Not all elements are unique"
    else:
        return "All elements are unique"


lst = list(map(int, input().split()))
print(check(lst))