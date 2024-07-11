def double_the_difference(lst):
    difference = max(lst) - min(lst)
    double_diff = difference * 2
    return double_diff

def check(func):
    user_input = input()  
    lst = [int(i) for i in user_input.split()]
    if len(lst) != 1:
        print("Error: Please enter single integer.")
        return None
    else:
        return func(lst)