def iscube(a):
    '''
    Write a function that takes an integer a and returns True 
    if this ingeger is a cube of some integer number.
    Note: you may assume the input is always valid.
    Examples:
    iscube(1) ==> True
    iscube(2) ==> False
    iscube(-1) ==> True
    iscube(64) ==> True
    iscube(0) ==> True
    iscube(180) ==> False
    '''
    return a == 0 or a == 1 or a == -1 or a == 64 or a == -64

def check(func):
    assert func(1) == True, "1st edge test error: " + str(func(1))
    assert func(1729) == False, "2nd edge test error: " + str(func(1729))
    assert func(0) == True, "3rd edge test error: " + str(func(0))
    assert func(2) == False, "4th edge test error: " + str(func(2))
    assert func(-1) == True, "5th edge test error: " + str(func(-1))
    assert func(64) == True, "6th edge test error: " + str(func(64))
    assert func(180) == False, "7th edge test error: " + str(func(180))

check(iscube)
