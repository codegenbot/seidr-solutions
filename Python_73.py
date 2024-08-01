```
def smallest_change(arr):
    n = len(arr)
    count = 0
    pos = [x for x in range(n)]
    
    for i in sorted(pos):
        if arr[i] != i:
            j = pos.index(i)
            pos[i], pos[j] = pos[j], pos[i]
            
            if i != j:
                count += 1
                
    return count