def double_the_difference(lst):
    print("Enter elements separated by comma: ")
    user_input = input()
    lst = user_input.split(',')
    if len(lst) == 2:
        a, b = map(int, lst)
        return abs(a - b) * 2
    else:
        print("Please enter exactly two numbers!")