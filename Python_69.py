```
def search(lst):
    max_num = -1
    for num in lst:
        if num > max_num and num > 0:
            max_num = num
    return max_num