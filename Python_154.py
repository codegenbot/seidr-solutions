def cycpattern_check(a, b):
    for i in range(len(a)):
        # Check if b is present at position i in a
        if b in a[i:]:
            # If b is present, check if it forms a cyclic pattern with the rest of the string
            if any(b in a[j:] + a[:j] for j in range(len(a))):
                return True
    return False