def leaders():
    n = int(input("Enter the number of elements in the array: "))
    arr = list(map(int, input("Enter the elements of the array: ").split()))
    result = [arr[n-1]]
    
    for i in range(n-2, -1, -1):
        if arr[i] >= max(arr[i+1:]):
            result.insert(0, arr[i])
            
    print(result)