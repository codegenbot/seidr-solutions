def search(lst):
    # create a dictionary to store the frequency of each integer
    freq = {}
    for i in lst:
        if i not in freq:
            freq[i] = 1
        else:
            freq[i] += 1

    # find the maximum frequency and its corresponding integer
    max_freq = -1
    max_int = -1
    for i, f in freq.items():
        if f > max_freq:
            max_freq = f
            max_int = i

    # return the maximum frequency integer if it is greater than 0, otherwise return -1
    if max_int > 0 and max_freq >= max_int:
        return max_int
    else:
        return -1