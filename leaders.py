def leaders(arr):
    leaders = [arr[i] for i in range(len(arr)-1,-1,-1) if all(j <= arr[i] for j in arr[i+1:])]
    return leaders