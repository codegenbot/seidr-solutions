numbers = list(map(int, input().split()))

def rolling_max(numbers):
    max_num = float("-inf")
    rolling_max_list = []
    for num in numbers:
        max_num = max(max_num, num)
        rolling_max_list.append(max_num)
    return rolling_max_list

print(rolling_max(numbers))