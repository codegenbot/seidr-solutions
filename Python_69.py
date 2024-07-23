def search(lst):
    freq = {}
    for num in lst:
        if num > 0:
            if num in freq:
                freq[num] += 1
            else:
                freq[num] = 1
    max_num = -1
    for num, count in freq.items():
        if num >= count and num > 0:
            max_num = num
            break
    return max_num

lst = input("Enter numbers separated by space: ").split()
print(search([int(i) for i in lst]))