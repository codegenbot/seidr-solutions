def search(lst):
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


# Testing the function
print(search([3, 4, 5, 2, 1, 5, 2, 4, 6, 7]))