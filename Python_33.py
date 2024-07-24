def sort_third(lst):
    n = int(input("Enter number of elements: "))
    user_input = [int(input(f"Enter element {i+1}: ")) for i in range(n)]
    return tuple(sorted((x for x in user_input), key=lambda x: int(str(x)[0])))