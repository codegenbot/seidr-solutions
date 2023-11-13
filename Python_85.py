
def add(lst):
    """Given a non-empty list of integers lst. add the even elements that are at odd indices..


    Examples:
        add([4, 2, 6, 7]) ==> 2 
    evens = 0
    odds = 0
    for i in range(len(lst)):
        if i % 2 == 1:
            evens += lst[i]
        else:
            odds += lst[i]
    return evens - odds

print(add([4, 2, 6, 7]))
    """
