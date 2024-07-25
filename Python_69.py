n = int(input())
input_lst = [int(num) for num in input().split()]
print(search(input_lst))


def search(lst):
    freq_dict = {}
    for num in lst:
        if num in freq_dict:
            freq_dict[num] += 1
        else:
            freq_dict[num] = 1
    max_num = -1
    max_count = 0
    for key, value in freq_dict.items():
        if key > 0 and value >= key:
            if value > max_count or (value == max_count and key > max_num):
                max_num = key
                max_count = value
    return max_num if max_num != -1 else None