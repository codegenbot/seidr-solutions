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
lst1, lst2 = [x.strip()[1:-1].split() for x in lst1+l2]
print(total_match([lst1], [lst2]))