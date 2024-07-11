def double_the_difference(lst):
    difference = max(lst) - min(lst)
    double_diff = difference * 2
    return double_diff

def check(func):
    user_input = input()
    if len(user_input) > 1:
        print("Error: Please enter single input.")
        return None
    else:
        lst = [int(x) for x in user_input.split()]
        return func(lst)