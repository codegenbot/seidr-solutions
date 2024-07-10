```
def leaders(arr):
    return [arr[i] for i in range(len(arr)-1, -1, -1) if all(x <= arr[i] for x in arr[i+1:])]

print(leaders([19, 748, 560, 43, 279, 439, 440, 462, 50, 715, 551, 459, 413, 60, 509, 829, 451, 362, 316, 680]))