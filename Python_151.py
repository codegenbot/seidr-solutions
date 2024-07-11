def double_the_difference(lst):
    lst.sort()
    if len(lst) < 2:
        return 0
    return (lst[-1] - lst[0]) * 2

def check():
    lst = [int(i) for i in input("Enter elements separated by space: ").split()]
    return double_the_difference(lst)

check()