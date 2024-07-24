'''
def add_elements(arr, k):
    return sum(i for i in set([abs(i) for i in arr[:k]]))
'''