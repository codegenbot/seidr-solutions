Here is a Python solution for the problem:

def basement(vector):
    total = 0
    index = 0
    while True:
        total += vector[index]
        if total < 0:
            return index
        index += 1