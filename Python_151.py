def double_the_difference():
    input_str = input("Enter elements separated by comma: ")
    try:
        lst = [int(i) for i in input_str.split(",")]
        if len(lst) < 2:
            return None
        lst.sort()
        return (lst[-1] - lst[0]) * 2
    except ValueError:
        return "Invalid input"


result = double_the_difference()
print(result)