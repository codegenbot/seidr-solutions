Here is the Python solution for the problem:

def basement(indexes):
    total = 0
    for i, num in enumerate(indexes):
        if total < 0:
            return i
        total += num
    return -1