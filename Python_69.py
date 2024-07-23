```
input_lst = input("Enter numbers separated by space: ").split()
lst = list(map(int, filter(lambda x: not x.startswith('.') and x.replace('.', '', 1).isdigit(), input_lst)))
def search(lst):
    freq = {}
    max_num = -1
    for num in lst:
        if num > 0:
            if num in freq:
                freq[num] += 1
            else:
                freq[num] = 1
        else:
            break
    for num, count in freq.items():
        if num >= count and num > 0:
            max_num = num
            break
    if max_num == -1:
        max_num = 0
    return max_num

print(search(lst))