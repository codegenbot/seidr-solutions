def double_the_difference():
    user_input = input("Enter elements separated by comma: ")
    try:
        lst = [int(i.strip()) for i in user_input.split(",")]
        if len(lst) < 2:
            return None
        lst.sort()
        return (lst[-1] - lst[0]) * 2
    except ValueError:
        return "Invalid input"


print(double_the_difference())