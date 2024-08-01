```
def total_match(lst1, lst2):
    total_chars_lst1 = sum(len(s) for s in lst1)
    total_chars_lst2 = sum(len(s) for s in lst2)
    
    if total_chars_lst1 < total_chars_lst2:
        return "List 1 has fewer characters."
    elif total_chars_lst1 > total_chars_lst2:
        return "List 2 has fewer characters."
    else:
        return "Both lists have the same number of characters."

lst1 = input("Enter list 1 (separated by commas): ")
lst2 = input("Enter list 2 (separated by commas): ")

lst1 = [s.strip() for s in lst1.split(',')]
lst2 = [s.strip() for s in lst2.split(',')]

print(total_match(lst1, lst2))