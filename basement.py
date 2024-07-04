def find_first_negative_index(arr):
    cumulative_sum = 0
    for i, num in enumerate(arr):
        cumulative_sum += num
        if cumulative_sum < 0:
            return i
    return -1


if __name__ == "__main__":
    n = int(input())
    arr = list(map(int, input().split()))
    print(find_first_negative_index(arr))