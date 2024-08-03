def check(lst, result):
    if isinstance(lst[0], int) and lst[1] == 2*result:
        print("Test passed")
    else:
        print("Test failed")