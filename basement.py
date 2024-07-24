Here is the Python solution for the problem:

def basement(indexes):
    total = 0
    for i in range(len(indexes)):
        total += indexes[i]
        if total < 0:
            return i
    return -1