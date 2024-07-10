```Python
def leaders(arr):
    leaders_list = []
    max_num = arr[-1]
    for i in reversed(range(len(arr))):
        if arr[i] >= max_num:
            leaders_list.append(arr[i])
            max_num = arr[i]
    return list(reversed(leaders_list))

print(leaders([0]))
print(leaders([1, 0]))
print(leaders([1, 451]))
print(leaders([2, 1000, 0]))
print(leaders([2, 0, 1000]))