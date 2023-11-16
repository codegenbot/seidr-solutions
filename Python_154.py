def cycpattern_check(a , b):

    if b in a:
        return True
    if b[::-1] in a:
        return True
    if b in a[::-1]:

    if b in a[::-1]:
        return True
    if b[::-1] in a[::-1]:
        return True

    if b in a:
        return True
    if b[::-1] in a:
        return True

        return True
    return False


print(cycpattern_check('himenss', 'simen'))
