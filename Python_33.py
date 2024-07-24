```
def sort_third(lst):
    return tuple(sorted((x[2] for x in lst)))

n = int(input("Enter number of elements: "))
user_input = [int(input(f"Enter element {i+1}: ")) for i in range(n)]
print(sort_third(tuple(user_input)))