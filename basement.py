```
def basement(arr):
    index = 0
    prefix_sum = 0
    
    for i in range(len(arr)):
        prefix_sum += arr[i]
        
        if prefix_sum < 0:
            return index
        
        index += 1
    
    return -1

# Read input from user
n = int(input().strip())
arr = list(map(int, input().strip().split()))

# Call the function and print the result
result = basement(arr)
print(result)
```