def find_first_negative_index(arr):
    current_sum = 0
    for i, num in enumerate(arr):
        current_sum += num
        if current_sum < 0:
            return i
    return -1

if __name__ == "__main__":
    n = int(input())
    arr = list(map(int, input().split()))
    print(find_first_negative_index(arr))