```
def leaders(arr):
    n = len(arr)
    leaders_list = [arr[n-1]]
    
    for i in range(n-2, -1, -1):
        if arr[i] >= max(arr[i+1:n]):
            leaders_list.append(arr[i])

    return list(reversed(leaders_list))

if __name__ == "__main__":
    n = int(input("Enter the number of elements: "))
    arr = [int(i) for i in input("Enter {} integers separated by space: ".format(n)).split()]
    print(leaders(arr))