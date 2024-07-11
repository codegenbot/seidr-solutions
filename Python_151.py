def double_the_difference(lst):
    if len(lst) < 2:
        return None
    try:
        lst = [int(i) for i in lst]
        lst.sort()
        return (lst[-1] - lst[0]) * 2
    except ValueError:
        return "Invalid input"


result = double_the_difference(input("Enter elements separated by comma: ").split(","))
print(result)