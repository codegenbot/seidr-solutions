Here is the modified code:

def search(lst):
    freq = {}
    for num in lst:
        if num in freq:
            freq[num] += 1
        else:
            freq[num] = 1
    max_num = max(freq.keys())
    return max_num if max_num > 0 and freq[max_num] >= max_num else -1