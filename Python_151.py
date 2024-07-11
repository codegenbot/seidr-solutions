def double_the_difference(lst):
    if len(lst) < 2:
        return None
    lst = [int(i) for i in lst]
    lst.sort()
    return (lst[-1] - lst[0]) * 2

while True:
    try:
        user_input = input("Enter elements separated by space: ").split()
        if len(user_input) < 2:
            print("Please enter at least two numbers.")
        else:
            result = double_the_difference(user_input)
            print(result)
            break
    except ValueError:
        print("Invalid input. Please enter only integers.")