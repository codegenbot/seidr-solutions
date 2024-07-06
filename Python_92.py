def any_int(x, y, z):
    if isclose(x + y, z) or isclose(x + z, y) or isclose(y + z, x):
        return True
    else:
        return False


# Test case 1:
assert any_int(3.0, 4, 7) == False

# Test case 2:
assert any_int(3.0, 4, 8) == True