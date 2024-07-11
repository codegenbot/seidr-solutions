def search():
    lst = input("Enter a list of numbers separated by space: ")
    lst = [int(num) for num in lst.split()]
    freq_dict = {}
    for num in lst:
        if num in freq_dict:
            freq_dict[num] += 1
        else:
            freq_dict[num] = 1
    max_num = -1
    for num, freq in freq_dict.items():
        if num > 0 and freq >= num:
            max_num = num
    return max_num