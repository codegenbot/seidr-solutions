Here is the corrected code:

def search(lst):
    freq = {}
    for num in lst:
        if num in freq:
            freq[num] += 1
        else:
            freq[num] = 1
    for k, v in freq.items():
        if k > 0 and v >= k:
            return k
    return -1