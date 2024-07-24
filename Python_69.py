```python
def search(lst):
    max_num = -1
    for num in lst:
        if num > 0 and (num > max_num or lst.count(num) == 1):
            max_num = num
    return max_num