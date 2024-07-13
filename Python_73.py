def array_change(lst):
    max_diff = 0
    for i in range(1, len(lst)):
        diff = abs(int(lst[i]) - int(lst[i - 1]))
        if diff > max_diff:
            max_diff = diff

    return max_diff


result = array_change([int(x) for x in input("Enter the array: ").split()])