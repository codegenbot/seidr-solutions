```
def smallest_change(arr):
    n = len(arr)
    arr.sort()
    hashmap = {val:i for i,val in enumerate(arr)}
    
    ans = 0
    for i in range(n):
        if arr[i] != i:
            j = hashmap[arr[i]]
            arr[i],arr[j] = arr[j],arr[i]
            hashmap[i],hashmap[arr[i]] = hashmap[arr[i]],i
            ans +=1
            
    return ans