
def add(lst):
    """Given a non-empty list of integers lst. add the even elements that are at odd indices..


    Examples:
        add([4, 2, 6, 7]) ==> 2
    """
    # Your code here
    lst = [4, 2, 6, 7]
    for i in lst:
        if i % 2 == 0:
            return i


# print(add(lst))
