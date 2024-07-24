```
def sort_third(lst):
    n = len(lst)
    sorted_lst = sorted((x for x in lst), key=lambda x: str(x)[:3])
    return tuple(sorted_lst)

n = int(input("Enter number of elements: "))
user_input = [int(input(f"Enter element {i+1}: ")) for i in range(n)]
print(sort_third(tuple(user_input)))