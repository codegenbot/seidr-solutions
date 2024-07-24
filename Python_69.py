```
def search(lst):
    freq = {}
    for num in lst:
        if num > 0 and is_prime(num):
            freq[num] = freq.get(num, 0) + 1
    max_num = -1
    for k, v in freq.items():
        if k >= v and k > max_num:
            max_num = k
    return max_num if max_num != -1 else 0