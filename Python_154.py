def cycpattern_check(a, b):
    if len(b) > len(a) // 2:
        return False
    if b.lower() in a.lower().replace(a.lower(), ""):
        return True
    return False


def check():
    a = input("Enter the string: ").lower()
    b = input("Enter the pattern to be checked: ").lower()
    result = cycpattern_check(a, b)
    print("Is cyclic pattern present?" if result else "Cyclic pattern is not present")


check()