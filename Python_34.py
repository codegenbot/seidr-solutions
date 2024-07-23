def unique():
    user_input = input("Enter comma-separated numbers: ")
    l = [int(x) for x in user_input.split(',')]
    return sorted(set(l))