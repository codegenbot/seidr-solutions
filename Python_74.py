```
def total_match(lst1, lst2):
    sum1 = sum(len(i) for i in lst1)
    sum2 = sum(len(i) for i in lst2)
    
    if sum1 < sum2:
        return lst1
    elif sum1 > sum2:
        return lst2
    else:
        return lst1

lst1, lst2 = input("Enter two lists of strings separated by comma: ").split(",")
print(total_match(eval('['+lst1+']'), eval('['+lst2+']')))