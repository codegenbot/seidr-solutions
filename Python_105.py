```python
```python
def by_length(arr):
    str_arr = [str(i) for i in arr if isinstance(i, int) and 1 <= i <= 9]
    sorted_arr = sorted(str_arr)
    return [num_to_name[int(i)] for i in reversed(sorted_arr)]

def num_to_name(num):
    names = ["One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"]
    return names[num - 1]
```