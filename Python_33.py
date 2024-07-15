Here is the modified code with input provided:
```
def sort_third(l: list):
    return [
        (
            i
            if i % 3 != 0
            else sorted([x for x in l[i//3*3+min(i%3,3-1):] if x % 3 == 0])[::-1]
        )
        for i in range(len(l))
    ]

my_list = [10,20,30,40,50,60,70,80,90,100,110,120,130,140,150]
print(sort_third(my_list))