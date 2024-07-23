def unique():
    user_input = input("Enter a list of elements separated by comma : ")
    l = [int(x) for x in user_input.split(',')]
    return sorted(set(l))