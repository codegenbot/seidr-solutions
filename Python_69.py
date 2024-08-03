```
def search():
    lst = input("Enter a list of numbers (separated by space): ")
    lst = [int(x) for x in lst.split()]
    max_num = -1
    freq_dict = {}
    for num in lst:
        if num in freq_dict:
            freq_dict[num] += 1
        else:
            freq_dict[num] = 1
    for num, freq in freq_dict.items():
        if freq >= num and num > 0:
            max_num = num
    return max_num

print(search())