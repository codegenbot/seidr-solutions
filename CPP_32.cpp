```
def get_unique_elements(my_list):
    ncoeff = set()
    for i in my_list:
        if i not in ncoeff:
            ncoeff.add(i)
    return list(ncoeff)
```