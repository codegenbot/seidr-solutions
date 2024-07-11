```
def find_max_min(lst):
    return str(min(lst)) + ' and ' + str(max(lst))

n = int(input("Enter the number of elements: "))
lst = [int(x) for x in input(f"Enter {n} space-separated integers: ").split()]
print(find_max_min(lst))