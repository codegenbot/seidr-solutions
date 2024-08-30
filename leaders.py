```python
def leaders(arr):
    max_seen = arr[-1]
    leaders_list = [max_seen]
    for num in arr[:-1][::-1]:
        if num >= max_seen:
            max_seen = num
            leaders_list.append(max_seen)
    return leaders_list[::-1]