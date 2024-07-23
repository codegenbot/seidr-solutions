numbers = [num for num in lst if num > 0]
max_num = -1
freq = {}
for num in numbers:
    if num in freq:
        freq[num] += 1
    else:
        freq[num] = 1