def find_closest_elements(arr):
    arr.sort()
    closest_pair = (abs(arr[0] - arr[1]), (arr[0], arr[1]))
    for i in range(1, len(arr) - 1):
        if abs(arr[i] - arr[i+1]) < closest_pair[0]:
            closest_pair = (abs(arr[i] - arr[i+1]), (arr[i], arr[i+1]))
    return closest_pair[1]

def check(lst):
    result = []
    for i in range(len(lst) - 1):
        closest_pair = (abs(lst[i] - lst[i+1]), (lst[i], lst[i+1]))
        result.append(closest_pair)
    return min(result)

arr = list(map(int, input().split()))
print(check(find_closest_elements(arr)))