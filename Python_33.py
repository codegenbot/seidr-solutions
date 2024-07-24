def sort_third(lst, key):
    return tuple(sorted((x for x in lst), key=lambda x: str(x[key-1])))

n = int(input("Enter number of elements: "))
user_input = [list(map(int, input(f"Enter element {i+1} (space separated): ").split())) for i in range(n)]
print(sort_third(tuple(user_input), 3))