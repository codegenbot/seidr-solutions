```
import numpy as np

def find_pair(arr, target):
    # Read input from user
    arr = list(map(int, input().split()))
    target = int(input())
    
    # Find the two elements that sum to the target
    for i in range(len(arr)):
        for j in range(i+1, len(arr)):
            if arr[i] + arr[j] == target:
                return [arr[i], arr[j]]
    return []
```