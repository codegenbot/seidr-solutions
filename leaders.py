```python
# leaders.py
def leaders(arr):
    leaders_list = [arr[-1]]
    max_right = arr[-1]
    for i in range(len(arr) - 2, -1, -1):
        if arr[i] >= max_right:
            leaders_list.insert(0, arr[i])
            max_right = arr[i]
    return leaders_list

if __name__ == "__main__":
    arr = [17, 11, 10, 12, 9, 8, 7, 6, 5, 4, 3, 2, 1]
    print(leaders(arr))