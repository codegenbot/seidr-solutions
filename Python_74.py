```
def total_match(lst1, lst2):
    sum_chars_lst1 = sum(len(x) for x in lst1)
    sum_chars_lst2 = sum(len(x) for x in lst2)

    if sum_chars_lst1 < sum_chars_lst2:
        return lst1
    elif sum_chars_lst1 > sum_chars_lst2:
        return lst2
    else:
        return lst1

lst1 = input("Enter the first list of strings (comma-separated): ")
lst2 = input("Enter the second list of strings (comma-separated): ")

lst1 = [x.strip() for x in lst1.split(',')]
lst2 = [x.strip() for x in lst2.split(',')]

print(total_match(lst1, lst2))