def sort_third(lst: list) -> list:
    return sorted(lst)

lst = input("Enter a list of integers separated by spaces: ")
lst = [int(i) for i in lst.split()]
print(sort_third(lst))