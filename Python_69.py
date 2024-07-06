````
lst = list(map(int, input("Enter numbers separated by space: ").split()))

def search(lst):
    freq_dict = {}
    for num in lst:
        if num in freq_dict:
            freq_dict[num] += 1
        else:
            freq_dict[num] = 1
    max_num = -1
    for num, freq in freq_dict.items():
        if freq >= num and num > 0:
            max_num = num
    return max_num