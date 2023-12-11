def leaders(arr):
    result = []
    current_leader = arr[-1]
    for i in range(len(arr)-2, -1, -1):
        if arr[i] >= current_leader:
            result.append(current_leader)
            current_leader = arr[i]
    return result

def main():
    arr = [int(x) for x in input().split()]
    print(leaders(arr))

if __name__ == "__main__":
    main()