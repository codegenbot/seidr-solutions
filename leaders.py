```Python
def leaders(arr):
    leaders = []
    max_seen = arr[-1]
    for i in range(len(arr)-1, -1, -1):
        if arr[i] >= max_seen:
            leaders.append(max_seen)
            max_seen = arr[i]
    return leaders

input_array = [16, 17, 4, 3, 5, 2, 7, 1, 6, 8]
print(leaders(input_array))