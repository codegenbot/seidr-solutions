```
def search():
    lst = list(map(int, input("Enter numbers separated by space: ").split()))
    freq = {}
    for i in lst:
        if i > 0:
            if i in freq:
                freq[i] += 1
            else:
                freq[i] = 1
    max_freq = -1
    for k, v in freq.items():
        if k >= v and k > 0:
            max_freq = k
            break
    return max_freq if max_freq != -1 else -1

print(search())