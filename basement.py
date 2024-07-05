total = 0
index = -1
for i in range(len(arr)):
    total += arr[i]
    if total < 0:
        index = i + 1
        break
if index == -1:
    index = len(arr)
return index