from operator import itemgetter


def sort_third(lst):
    n = int(input("Enter number of elements: "))
    user_input = [int(input(f"Enter element {i+1}: ")) for i in range(n)]
    return tuple(sorted(user_input, key=itemgetter(0)))