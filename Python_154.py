```
def cycpattern_check(a, b):
    if not a.isnumeric() or not b.isnumeric():
        return False

    total = int(a) + int(b)
    if total % 2 == 0:
        return True
    else:
        return False


cycpattern_check = check(cycpattern_check)

print(cycpattern_check('1', '1')) # Should return True
print(cycpattern_check('3', '4')) # Should return True
print(cycpattern_check('5', '6')) # Should return False.