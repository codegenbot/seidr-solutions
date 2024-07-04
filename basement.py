def find_first_negative_index(nums):
    current_sum = 0
    for i, num in enumerate(nums):
        current_sum += num
        if current_sum < 0:
            return i
    return -1


if __name__ == "__main__":
    n = int(input().strip())
    nums = list(map(int, input().strip().split()))
    print(find_first_negative_index(nums))