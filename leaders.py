def leaders(arr):
    leaders_list = []
    max_right = arr[-1]
    for i in range(len(arr)-1, -1, -1):
        if arr[i] >= max_right:
            leaders_list.append(max_right)
            max_right = arr[i]
    return [max_right] + leaders_list[::-1]

if __name__ == "__main__":
    arr = [8, 534, 540, 19, 595, 544, 590, 453, 122]
    print(leaders(arr))