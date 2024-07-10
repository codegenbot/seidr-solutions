```
def leaders(arr):
    leaders = []
    max_right = arr[-1]
    leaders.append(max_right)
    
    for i in range(len(arr)-2,-1,-1):
        if arr[i] >= max_right:
            max_right = arr[i]
            leaders.insert(0, max_right)
    
    return leaders

print(leaders([19, 748, 560, 43, 279, 439, 440, 462, 50, 715, 551, 459, 413, 60, 509, 829, 451, 362, 316, 680]))