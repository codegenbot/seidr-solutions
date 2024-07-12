```
def double_the_difference(lst):
    return (max(lst) - min(lst)) * 2

def check():
    lst = list(map(int, input('"Enter a list of numbers:" ').split(",")))
    return double_the_difference(lst)