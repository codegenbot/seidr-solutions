```
def total_match(lst1, lst2):
    sum1 = sum(len(s) for s in lst1)
    sum2 = sum(len(s) for s in lst2)

    if len(lst1) == 0 and len(lst2) == 0:
        return "Both lists are empty"
    elif sum1 < sum2:
        return lst1
    elif sum1 > sum2:
        return lst2
    else:
        return lst1

lst1 = input("Enter the first list of strings (comma-separated): ")
lst1 = [s.strip() for s in lst1.split(",")]

lst2 = input("Enter the second list of strings (comma-separated): ")
lst2 = [s.strip() for s in lst2.split(",")]

print(total_match(lst1, lst2))