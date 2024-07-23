def can_arrange(arr):
    for i in range(1, len(arr)):
        if arr[i] <= arr[i-1]:
            return i-1
    return -1

if __name__ == "__main__":
    arr = list(map(int, input("Enter the array: ").split()))
    print(can_arrange(arr))