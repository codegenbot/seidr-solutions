def leaders(arr):
    leaders = [max(arr[i:]) for i in range(len(arr))]
    return [num for num in reversed(leaders) if all(num >= x for x in arr[reversed(leaders).index(num)+1:])]
print(leaders([0]))
print(leaders([1, 0]))
print(leaders([1, 451]))
print(leaders([2, 1000, 0]))
print(leaders([2, 0, 1000]))