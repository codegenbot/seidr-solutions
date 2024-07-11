```
def search():
    lst = input("Enter numbers separated by space: ").split()
    freq_dict = {}
    for num in lst:
        if num.isdigit() and int(num) > 0:
            if num in freq_dict:
                freq_dict[num] += 1
            else:
                freq_dict[num] = 1
    max_num = -1
    for num, freq in freq_dict.items():
        if num > 0 and freq >= int(num):
            max_num = int(num)
    return str(max_num)