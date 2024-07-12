```
    def smallest_change(arr):
        n = len(arr)
        left = right = 0
        changes = 0
        
        while left < n // 2:
            if arr[left] != arr[n - 1 - left]:
                right = n - 1
                break
            left += 1
        else:
            return 0
    
        for i in range(left, n):
            if arr[i] != arr[n - 1 - i]:
                changes += 1
            else:
                break
    
        return changes