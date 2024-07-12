def check(target, expected):
    actual = double_the_difference([1, 2, -3, 4, 5, 6])
    if actual == expected:
        print("Test passed")
    else:
        print(f"Expected {expected}, got {actual}")