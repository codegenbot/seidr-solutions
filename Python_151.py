```
def double_the_difference():
    lst = input("Enter the list: ").split()
    return sum(i**2 for i in map(int, filter(str.isdigit, lst)) if int(i) % 2 != 0)