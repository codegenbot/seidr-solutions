def double_the_difference(lst):
    if len(lst) < 2:
        return None
    try:
        lst = [int(i.strip()) for i in (lst[0].strip().split(","))]
        lst.sort()
        return (lst[-1] - lst[0]) * 2
    except ValueError:
        return "Invalid input"


result = double_the_difference(input("Enter elements separated by comma: "))
print(result)