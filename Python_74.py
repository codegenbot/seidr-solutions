Here's the corrected code:

```python
def total_match(lst1, lst2):
    total_chars_lst1 = sum(len(s) for s in lst1)
    total_chars_lst2 = sum(len(s) for s in lst2)

    if len(lst1) < len(lst2):
        return lst1
    elif len(lst1) > len(lst2):
        return lst2
    else:
        return lst1