def double_the_difference():
    lst = input("Enter a list of integers: ").split(", ")
    return sum(
        i**2
        for i in [int(x) for x in lst]
        if isinstance(int(x), int) and int(x) >= 0 and int(x) % 2 != 0
    )