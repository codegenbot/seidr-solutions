```
def can_arrange(arr):
    arr.sort()
    for i in range(1, len(arr)):
        if arr[i] <= arr[i-1]:
            return "No"
    return "Yes"

arr = list(map(int, input("Enter the array elements (space separated): ").split()))
print(can_arrange(arr))