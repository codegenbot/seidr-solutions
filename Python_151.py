def double_the_difference(lst):
    if "," in lst:
        try:
            lst = [int(i.strip()) for i in lst.split(",")]
            lst.sort()
            return (lst[-1] - lst[0]) * 2
        except ValueError:
            return "Invalid input"
    else:
        return None

result = double_the_difference(input("Enter elements separated by comma: "))
print(result)