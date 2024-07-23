def unique(l: list):
    user_input = input("Enter a list of elements separated by comma : ")
    l = []
    for x in user_input.split(','):
        try:
            l.append(int(x))
        except ValueError:
            print(f"Invalid input '{x}'. Please enter integers only.")
    return sorted(set(l))