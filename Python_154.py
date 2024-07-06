def cycpattern_check(a, b):
    # Forward loop
    for i in range(len(a)):
        if b in a[i:]:
            return True

    # Backward loop
    for i in range(len(a) - 1, -1, -1):
        if b in a[i:]:
            return True

    return False